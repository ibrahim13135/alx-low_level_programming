#include "main.h"
/**
 * create_array - Creates an array of chars and
 *                initializes it with a specific char.
 * @size: The size of the array to be initialized.
 * @c: The specific char to intialize the array with.
 *
 * Return: If size == 0 or the function fails - NULL.
 *         Otherwise - a pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	s = malloc(size * sizeof(char));
	if (size == 0)
		return (NULL);
	else if (s == NULL)
		printf("Memory allocation failed\n");
		return NULL;
	for (int i = 0; i < size; i++)
		s[i] = c;

	return (s);
}
