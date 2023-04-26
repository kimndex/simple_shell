#ifndef _OURS_H_
#define _OURS_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* for read/write buffers */
#define READ_BUF_SIZE 1024
#define WRITE_BUF_SIZE 1024
#define BUF_FLUSH -1

/* to change current directory task 10 */
int _ourcd(info_t *);

/* for the environment tasks 5 and 9 */
char *_getenv(info_t *, const char *);
int _myenv(info_t *);
int _mysetenv(info_t *);
int _myunsetenv(info_t *);
int populate_env_list(info_t *);

/*alias built in command task 13 */
int _ouralias(info_t *);

/* to handle the path task 3 */
char **find_path(char **environ)
