#include "shell.h"

/**
 *  read_line - get a line from a user with editing
 *  Return: line of string
 */

char *read_line(void)
{
	char *line = NULL;
	size_t len = 0;
	ssize_t n = 0;

	if (isatty(STDIN_FILENO))
		write(STDOUT_FILENO, "$ ", 2);
	n = getline(&line, &len, stdin);
	if (n == -1)
	{
		free(line);
		line = NULL;
		return (NULL);
	}
	return (line);
}
