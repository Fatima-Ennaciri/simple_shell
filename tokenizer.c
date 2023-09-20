#include "shell.h"
/**
 * **tokenizer -  splits a string into words
 * @line: input command of strings
 * Return: list of words
 */
char **tokenizer(char *line)
{
	char *token = NULL, *tmp = NULL, **command = NULL;
	int counter = 0, i = 0;

	if (!line)
	return (NULL);
	tmp = _strdup(line);
	token = strtok(tmp, DELIM);
	if (token == NULL)
	{
		free(line), line = NULL;
		free(tmp), tmp = NULL;
		return (NULL);
	}
	while (token)
	{
		counter++;
		token = strtok(NULL, DELIM);
	}
	free(tmp), tmp = NULL;  /*after free of pointer asign to hrm NULL*/
	command = malloc(sizeof(char *) * (counter + 1));
	if (!command)
	{
		free(line), line = NULL;
		return (NULL);
	}
	token = strtok(line, DELIM);
	while (token)
	{
		command[i] = _strdup(token);/*command[i] = token;*/
		token = strtok(NULL, DELIM);
		i++;
	}
	free(line), line = NULL;
	command[i] = NULL;
	return (command);
}
