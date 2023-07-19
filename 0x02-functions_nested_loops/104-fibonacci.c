#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int i, j, k;
	unsigned long int hi, lo;
	unsigned long int h2i, h2o;
	unsigned long int l2i, l2o;

	j = 1;
	k = 2;
	printf("%lu", j);
	for (i = 1; i < 98; i++)
	{
		if (i != 1)
			printf(", ");
		printf("%lu", k);
		k += j;
		j = k - j;
	}
	putchar('\n');
	return (0);
}

