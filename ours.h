#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* to change current directory task 10 */
int _ourcd(info_t *);

/* for the environment tasks 5 and 9 */
char *_getenv(info_t *, const char *);
int _myenv(info_t *);
int _mysetenv(info_t *);
int _myunsetenv(info_t *);
int populate_env_list(info_t *);
