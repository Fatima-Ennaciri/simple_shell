#include "shell.h"

/**
 * main - simple shell main function
 * @count: count arguments
 * @argm: arguments vector
 * Return:  0 on success
*/
int main(int count, char **argm)
{
	char *line = NULL;
	char **command = NULL;
	int status = 0;
	(void) count;

	while (2)
	{
	line = read_line();
	if (line == NULL) /* reache end-of-file (EOF) ctr + D */
	{
		if (isatty(STDIN_FILENO))
			write(STDOUT_FILENO, "\n", 1);
		return (status);

	}

	command = tokenizer(line);
	if (!command) /* <=> to command == NULL*/
	{
		continue;
		/*free(command);*/
	}
	status = _execute(command, argm);
	}
}
