#include "main.h"

/**
 * main - "entry point"
 * ReturnAl:Always 0
 */
int print_sign(int n)
{
	int a, b, c, d;

	for (a = 0; a <= 2; a++)
	{
	for (b = 0; b <= 9; b++)
	{
	for (c = 0; c <= 5; c++)
	{
	for (d = 0; d <= 9; d++)
	{
	_putchar(a + '0');
	_putchar(b + '0');
	_putchar(':');
	_putchar(c + '0');
	_putchar(d + '0');
	_putchar('\n');
	}
	}
	}
	}
}
