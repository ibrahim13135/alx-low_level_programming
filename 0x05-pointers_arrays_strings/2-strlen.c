#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: string parameter input .
 *
 * Return: The length of @str.
 */
int _strlen(char *s)
{
	int len;

	while (*s++)
		if (*s != '\0')
			len++;
	return (len);

}
