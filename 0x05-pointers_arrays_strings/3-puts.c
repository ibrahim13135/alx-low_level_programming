#include "main.h"
#include <stdio.h>

/**
 * _puts - Prints a string to stdout.
 * @str: The string to be printed.
 */
void _puts(char *str) {
    printf("%s\n", str);
}

int main() {
	char *str = "Hello World";
	_puts(str);
	return 0;
}

