#include "shell.h"
#include <stdlib.h>

/**
 * _strdup - Duplicate a string
 * @str: Pointer to the input string
 * Return: Pointer to the duplicated string
 * (or NULL if str is NULL or memory allocation fails)
 */
char *_strdup(const char *str)
{
	char *ptr;
	int i;
	int length = 0;
	const char *original = str;

	if (str == NULL)
		return (NULL);
/* Calculate the length of the input string*/
	while (*str != '\0')
	{
		length++;
		str++;
	}

/* Reset str to the original position*/
	str = original;

/* Allocate memory for the duplicated string*/
	ptr = malloc(sizeof(char) * (length + 1));

	if (ptr == NULL)
		return (NULL);

/* Copy the characters from the original string to the new one*/
	for (i = 0; i < length; i++)
		ptr[i] = str[i];

/* Null-terminate the duplicated string*/
	ptr[length] = '\0';
	return (ptr);
}
