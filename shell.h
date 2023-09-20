#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <errno.h>
#include <fcntl.h>

#define DELIM " \t\n"
extern char **environ;


char **tokenizer(char *line);
char *read_line(void);
int _execute(char **command, char **argument);

void freearrystr(char **array);

char *_strdup(const char *str);

#endif
