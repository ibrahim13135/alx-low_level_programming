#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: the minimum value of the array
 * @max: the maximum value of the array
 * Return: a pointer to the newly created array, or NULL if failure
 */
int *array_range(int min, int max)
{
	int *a;
	int i, len;

	if (min > max)
		return (NULL);

	len = max - min + 1;

	a = malloc(sizeof(int) * len);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		a[i] = min++;

	return (a);
}

