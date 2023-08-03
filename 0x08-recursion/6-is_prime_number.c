#include "main.h"
 /**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to be checked.
 *
 * Return: If the integer is not prime - 0.
 *         If the number is prime - 1.
 */
int is_prime_number(int n, int i)
{
	if (n <= 2)
		return (n == 2);
	else if (n % i == 0)
		return (0);
	else if (i * i > n)
		return (1);
	else
		return (is_prime_number(n, i + 1));

}

