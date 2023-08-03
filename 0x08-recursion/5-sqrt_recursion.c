#include "main.h"
 /**
 * find_sqrt - Finds the natural square root of an inputted number.
 * @num: The number to find the square root of.
 * @root: The root to be tested.
 *
 * Return: If the number has a natural square root - the square root.
 *         If the number does not have a natural square root - -1.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
        	return -1;
	else if (n == 0 || n == 1)
		return n;
	else
		return _sqrt_recursion(n / 2) * 2 <= n ? _sqrt_recursion(n / 2) : -1;

}
