#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc.
 *@b: the number of bytes to allocate
 *
 * Return: A pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);

	if (s == NULL)
		exit(98);


	return (s);
}
