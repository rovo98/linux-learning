/***************************************
 *
 * Header file for simple-shell-in-c.c
 *
 * author: rovo98
 * date: 2018.9.3
 *
 * ****************************************/

#define LSH_RL_BUFSIZE 1024
#define LSH_TOK_BUFSIZE 64
#define LSH_TOK_DELIM " \t\r\n\a"

void lsh_loop(void);
char *lsh_read_line(void);
char **lsh_split_line(char *line);
// returns the status of the execution
int lsh_execute(char **args);
int lsh_launch(char **args);
