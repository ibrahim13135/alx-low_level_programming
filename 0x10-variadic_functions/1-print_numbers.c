#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: A variable number of numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{

	va_list args;


	va_start(args, n);


	for (unsigned int i = 0; i < n; i++)

		printf("%d", va_arg(args, int));


		if (separator != NULL && i < n - 1)
			printf("%s", separator);



	printf("\n");

	va_end(args);
}
