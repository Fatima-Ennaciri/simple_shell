#include "shell.h"

/**
 * _execute - function that execute entered command
 * @command: strings
 * @argument: argument vector
 * Return: status of success or no
 */

int _execute(char **command, char **argument)
{
	pid_t son = 0;
	int status = 0;

	son = fork();
	if (son == 0)
	{
		if (execve(command[0], command, environ) == -1)
		{
			perror(argument[0]);
			freearrystr(command);
			exit(127);
		}
	}
	else
	{
		waitpid(son, &status, 0);
		freearrystr(command);
	}
	return (WEXITSTATUS(status));
}
