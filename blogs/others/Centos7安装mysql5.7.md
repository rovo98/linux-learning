---
author: rovo98
description: notes for install mysql in centos7
---

# CentOS7通过yum(yellow dog update modifier)安装mysql5.7

### 1.配置yum源

```bash
# 下载mysql安装源包
root @~> wget http://dev.mysql.com/get/mysql57-community-release-el7-8.noarch.rpm
# 安装mysql源
root @~> yum localinstall mysql57-community-release-el7-8.noarch.rpm
```

检查mysql源是否安装成功:

```bash
root @~> yum repolist enabled | grep "mysql.*-community.*"
```

如下图则安装成功:

![mysql_source](https://github.com/rovo98/linux-learning/blob/master/blogs/images/repo-resouce.png)

### 2.安装mysql

```bash
root@ ~> yum install -y mysql-community-server
```

### 3.启动MySQL服务并设置开机自动启动

```bash
root@ ~> systemctl start mysqld
```

查看MySQL启动状态

![mysql_status](https://github.com/rovo98/linux-learning/blob/master/blogs/images/mysql-status.png)

```bash
root@ ~> systemctl enable mysqld
root@ ~> systemctl daemon-reload
```

### 5.修改默认密码

刚安装完的mysql会自动给root用户分配一个临时密码，而且必须重新设置密码(从5.5版本开始)

- 先查看root用户的临时密码

```bash
root@ ~> grep "temporary password" /var/log/mysqld.log
```

- 使用临时的密码登录进mysql来设置新的密码

```bash
mysql> set PASSWORD = PASSWORD('[YOUR_NEW_PASSWORD]')
```

![temporay-password](https://github.com/rovo98/linux-learning/blob/master/blogs/images/temporary-password.png)

- 可能遇到的问题：设置的密码过于简单mysql报错:

```txt
Your password does not satisfy the current policy requirements.
```

解决方法：由于刚安装的mysql的密码默认强度是最高的，若想要设置简单的密码就要修改```validate_password_policy```的值，

#### validate_password_policy有以下取值：

|Policy|Tests Performed|
|:-----:|:-------------:|
|0 or LOW|Length|
|1 or MEDIUM|Length;numeric,lowercase/uppercase,and special characters|
|2 or STRONG|Length;numeric,lowercase/uppercase,and special characters; dictionary file|

操作：

- 设置安全级别

```bash
mysql> set global validate_password_policy=0;
```

- 设置密码长度为8，可以设置为其他值，最小为4位

```bash
mysql> set global validate_password_length=4;
```

之后就可以设置简单的密码了。

### 5.允许root远程登录

```bash
mysql> GRANT ALL PRIVILEGES ON *.* TO 'root'@'%' IDENTIFIED BY '[YOUR_PASSWORD]' WITH GRANT OPTION;
mysql> flush privileges;
```

### 6. 修改字符集编码为UTF-8

- 查看当前字符编码

```bash
mysql> show variables like "char%';
```

检测是否都是utf-8(filesystem除外)，如果不是就需要修改。-> ```character_set_server```一般是拉丁文编码。

```bash
# 停止mysqld服务
systemctl stop mysqld
# 进入my.cnf文件，一般是/etc/路径下
vim /etc/my.cnf
# 在[mysqld]下追加character-set-server=utf-8
# 在[mysql]下追加default-character-set=utf-8
# 启动mysqld
systemctl start mysqld
```