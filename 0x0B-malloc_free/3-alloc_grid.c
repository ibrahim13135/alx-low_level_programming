#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2-dimensional array of
 *               integers with each element initalized to 0.
 * @width: The width of the 2-dimensional array.
 * @height: The height of the 2-dimensional array.
 *
 * Return: If width <= 0, height <= 0, or the function fails - NULL.
 *         Otherwise - a pointer to the 2-dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **MAA;
	int hgt_index, wid_index;

	if (width <= 0 || height <= 0)
		return (NULL);

	MAA = malloc(sizeof(int *) * height);

	if (MAA == NULL)
		return (NULL);

	for (hgt_index = 0; hgt_index < height; hgt_index++)
	{
		MAA[hgt_index] = malloc(sizeof(int) * width);

		if (MAA[hgt_index] == NULL)
		{
			for (; hgt_index >= 0; hgt_index--)
				free(MAA[hgt_index]);

			free(MAA);
			return (NULL);
		}
	}

	for (hgt_index = 0; hgt_index < height; hgt_index++)
	{
		for (wid_index = 0; wid_index < width; wid_index++)
			MAA[hgt_index][wid_index] = 0;
	}

	return (MAA);
}
