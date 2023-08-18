#include "variadic_functions.h"
<<<<<<< HEAD
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);
=======
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
>>>>>>> 3a07bb7cdd3cc3816a6a995fac3f8a1677010105

	return (sum);
}
