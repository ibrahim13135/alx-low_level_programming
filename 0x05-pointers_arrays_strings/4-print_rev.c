#include "main.h"

/**
 *  * print_rev - Prints a string in reverse.
 *   * @s: The string to be printed.
 *    */
void print_rev(char *s)
{
	int i = 0;
	
	while (s[i])
		i++;

	while (i--)

		putchar (s[i]);


		putchar('\n');

}
