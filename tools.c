#include "shell.h"

/**
 * freearrystr - function to free allocated memory
 * @array: array of 2D
 */

void freearrystr(char **array)
{
	int i;

	if (!array)
		return;

	for (i = 0; array[i]; i++)
	{
		/*printf("%s\n", command[i]);*/
		free(array[i]);
		array[i] = NULL;
	}
	free(array);
	array = NULL;
}
