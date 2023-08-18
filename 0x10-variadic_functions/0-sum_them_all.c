#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: 0
*/
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;

	if (n == 0)
		return (0);


	va_list args;

	va_start(args, n);

	for (unsigned int i = 0; i < n; i++)
		sum += va_arg(args, int);

	va_end(args);

	return (sum);
}
