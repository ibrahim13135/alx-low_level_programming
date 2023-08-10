#include "main.h"
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: a pointer to the memory previously allocated with malloc
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes, of the new memory block
 * Return: a pointer to the new memory block, or NULL if failure
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	char *old_p;
	unsigned int i, min;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0 && ptr != NULL)

		free(ptr);
		return (NULL);

	p = malloc(new_size);

	if (p == NULL)
		return (NULL);

	old_p = (char *)ptr;

	min = old_size < new_size ? old_size : new_size;

	for (i = 0; i < min; i++)
		p[i] = old_p[i];

	free(ptr);

	return ((void *)p);
}































