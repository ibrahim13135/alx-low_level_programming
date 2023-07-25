#include "main.h"
#include <stdio.h>

/**
 * rev_string - Reverses a string.
 * @s: The string to be reversed.
 */
void rev_string(char *s)
{
	int len = 0, tall = 0;
	char tmp;

	while (s[tall++])
		len++;

	for (tall = len - 1; tall >= len / 2; tall--)
	{
		tmp = s[tall];
		s[tall] = s[len - tall - 1];
		s[len - tall - 1] = tmp;
	}
}
