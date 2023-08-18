#include "variadic_functions.h"
#include <stdio.h>
<<<<<<< HEAD
#include <stdarg.h>
=======
>>>>>>> 3a07bb7cdd3cc3816a6a995fac3f8a1677010105

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: A variable number of numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
<<<<<<< HEAD
	va_list nums;
	unsigned int index;

	va_start(nums, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(nums, int));

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(nums);
=======

	va_list args;


	va_start(args, n);


	for (unsigned int i = 0; i < n; i++)

		printf("%d", va_arg(args, int));


		if (separator != NULL && i < n - 1)

			printf("%s", separator);


	va_end(args);


	printf("\n");
>>>>>>> 3a07bb7cdd3cc3816a6a995fac3f8a1677010105
}
