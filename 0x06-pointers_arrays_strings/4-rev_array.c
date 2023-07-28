#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: The array of integers to be reversed.
 * @n: The number of elements in the array.
 */
void reverse_array(int *a, int n)
{
	int tmp, tall;

	for (tall = n - 1; tall >= n / 2; tall--)
	{
		tmp = a[n - 1 - tall];
		a[n - 1 - tall] = a[tall];
		a[tall] = tmp;
	}
}
