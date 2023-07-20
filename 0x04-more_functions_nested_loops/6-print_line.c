#include "main.h"

/**
 * print_line - Draws a straight line using the character _.
 * @n: The number of _ characters to be printed.
 */
void print_line(int n)
{
	int len;

	if (n >= 0)
	{
		for (len = 1; len < n; len++)
			_putchar('95');
	}

	_putchar('\n');
}
