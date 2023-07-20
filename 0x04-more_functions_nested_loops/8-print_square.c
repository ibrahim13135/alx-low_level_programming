#include "holberton.h"

/**
 * print_square - Prints a squareusing the character #.
 * @size: The size of the square.
 */
void print_square(int size)
{
	int row, cloumn;

	for ( row = 1 ; row <= size ; row++)
	{
		for (column = 1 ; cloumn <= size ; cloumn++)
				_putchar('#');
			_putchar('\n')
	}
