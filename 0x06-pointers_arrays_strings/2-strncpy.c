#include "main.h"

/**
 * _strncpy - Copies at most an inputted number
 *            of bytes from string src into dest.
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 * @n: The maximum number of bytes to copied from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	char src[40];
	char dest[12];

	memset(dest, '\0', sizeof(dest));
	strcpy(src, "This is tutorialspoint.com");
	strncpy(dest, src, 10);

	printf("Final copied string : %s\n", dest);

	return (0);

}






