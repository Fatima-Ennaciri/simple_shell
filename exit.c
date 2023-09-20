#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <main.h>

/**
 * exit_shell - exits the shell
 * main - Entry point
 * Return: 0 on success.
 */

/* Function to handle the exit built-in command */
void exit_shell(void)
{
	printf("Exiting the shell.\n");
	exit(EXIT_SUCCESS);
/* Terminate the shell with a success status code */
}

int main(void)
{
	char input[100];
/* You can adjust the buffer size as needed */
	while (1)
	{
		printf("SimpleShell> ");
		fgets(input, sizeof(input), stdin);
		input[strlen(input) - 1] = '\0';
/*  Remove the newline character from the input */

	if (strcmp(input, "exit") == 0)
	{
		exit_shell(void);
/* Call the exit_shell function when "exit" is entere */
}
	else
{
/* Handle other commands or execute external programs here */
}
	}
	return (0);
}

