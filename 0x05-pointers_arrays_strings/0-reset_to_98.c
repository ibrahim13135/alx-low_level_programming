#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - Takes a pointer to an int and updates
 *               the value it points to to 98.
 * @n: The pointer to an int.
 */
void reset_to_98(int *n)
{
	int n;
	int *p = &n;

	*p = 402;
	printf("n is %d", n);


}
