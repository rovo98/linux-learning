---
author: rovo98
description: notes for learning linux process
---

# Linux 进程调度问题

## 引入Linux 进程

在linux内核中，进程通过一个双向链表来进行管理。每一个进程为一个进程描述符(task_strut)

### 进程描述符：

- 进程元数据
    1. 创建一个进程就是添加一个进程描述符文件(node)到由内核管理的双向链表
    2. 删除一个进程就是从链表中移除进程描述符文件(node).

### 进程切换 (Context switch)

当cpu中正在执行的进程(process A)被移出(suspend),cpu中当前进程的相关信息写到需要移除的进程的进程描述符(task_strut)中,
下一个进程(process B)被内核读取(该过程称为resume，恢复)到cpu中, 注意：进程的切换也是必须由内核来执行的。
进程的切换就是通过**用户空间和内核模式的不断切换**来完成的。

### 进程抢占

- linux允许进程抢占，优先级高的进程可抢占优先级低的进程。
- 通过系统的时钟：tick，-> 滴答(时间解析度: 1s 滴答的次数)来确定抢占的开始。
- 每一次滴答产生一个可抢的时钟中断 --> 意味着进程可以抢占

#### 进程类别

- 交互式进程(I/O密集型，等待I/O, 对cpu的需求量小)
- 批处理进程(CPU密集型)
- 实时进程(real time)

- 分配策略：
    1. CPU: 时间片长，优先级低
    2. IO: 时间片短，优先级高 -> 毕竟对CPU需求非常低，优先级高可以确保用户体验

#### linux优先级 : priority

- 实时优先级： 1-99， 数字越小，优先级越低
- 静态优先级： 100-139， 数据越小，优先级越高
- **实时优先级比静态优先级高**

查看实时优先级： ps -e -o class,rtprio, pri, nice, cmd

- nice值： 调整静态优先级 [-20，19] 对应 100 - 139

#### linux内核的调度类别：

- 对于实时进程：
    1. SCHED_FIFO (First in first out)
    2. SCHED_RR (Round robin)

- 对于用户进程:
    - SCHED_OTHER (SCHED_NORMAL in unix) 即用来调度优先级在100-139的进程

#### 动态优先级：

- 内核一直监控用户进程的状态，当发现进程始终得不到运行，则**临时**增加进程优先级，使它运行；
- 否则，调低进程优先级。

- dynamic priority = max (100, min(static priority - bonus + 5), 139)

如: 110 bonus = 3
则进程优先级被调为 112，(优先级降低) bonus 范围(0 - 10)

#### 手动调整优先级：

- 100 - 139 ： 使用nice值来调整
    1. nice N COMMAND   (启动命令并制定优先级)
    2. renice -n # PID  (更改正在执行的进程的优先级)
- 1-99 (实时进程):
    1. chrt -f -p [prio] pid   (FIFO)
    2. chrt -r -p [prio] pid   (ROUND robin)
    3. chrt -f -p [prio] COMMAND
    4. chrt -p [prio] COMMAND  --> 也可以调整100-139范围的进程

#### 内核对进程的挑选

linux针对1-139的优先级设置了相应的139个队列，这样对于每个队列中的进程，优先级相同，
使用FIFO的策略进行调用。

- 对于每个队列都有两个队列，一个为过期队列和活动队列。即实际有2 X 139 个队列。

【注意】，在运行中的队列且运行需求未完成(给它分配的cpu时间已经结束)的进程,将被放到
过期队列，下次对进程进行调度时，直接将两个队列进行调换。

- 这样将保证了进程调度算法的O(1)时间复杂度。

### 补充：linux如何创建进程 COW

- Kernel -> init

每一个进程都有一个父进程，除了init.

- init
    - fork(): 系统调用
    - task_struct
        - Memory -> Parent
        - COW: Copy On Write