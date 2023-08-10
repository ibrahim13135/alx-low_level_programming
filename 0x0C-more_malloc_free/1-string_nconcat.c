#include "main.h"

/**
 * string_nconcat - Concatenates two strings
 *@s1: The first string
 *@s2: The second string
 *@n: The number of bytes of s2 to concatenate
 *
 *Return: A pointer to the newly allocated space in memory, or NULL if failure
**/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int i, j, len1, len2;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1] != '\0'; len1++)
	;
	for (len2 = 0; s2[len2] != '\0'; len2++)
	;


	if (n >= len2)
		n = len2;

	a = malloc(sizeof(char) * (len1 + n + 1));

	if (a == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		a[i] = s1[i]

	for (j = 0; j < n; j++)
		a[i + j] = s2[j]

	a[i + j] = '\0';

	return (s);

}
