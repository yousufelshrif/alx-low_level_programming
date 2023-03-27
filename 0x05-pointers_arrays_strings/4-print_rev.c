#include "main.h"
#include <stdio.h>

/**
 * print_rev -  prints a string, in reverse, followed by a new line.
 * @s: pointer to the string to be printed in reverse
 */

void print_rev(char *s)
{
	int c;

	while (s[c] != '\0')
	{
		c++;
	}

	for (c -= 1;c >= 0; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}
