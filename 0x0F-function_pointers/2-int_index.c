#include "function_pointers.h"
/**
 * int_index - searches for an integer.
 * @array: the int of array
 * @size: the number of elements in the array
 * @cmp: A pointer to the function to be used to compare values.
 *
 * Return: the intger index
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int s = 0;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (; s < array; s++)

		if (cmp(array[s]) != NULL)
			return (s);

		return (-1);
}
