#include "main.h"

/**
 * times_table - "Write a function that prints the 9
 * times table, starting with 0"
 * ReturnAl: Always void
 */
void times_table(void)
{
	int i, j, a, b, c;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
	{
		a = i * j;
	if (a > 9)
	{
	b = a % 10;
	c = (a - b) / 10;
	_putchar(',');
	_putchar(' ');
	_putchar(c + '0');
	_putchar(b + '0');
	}
	else
	{
		if (j != 0)
		{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		}
		_putchar(a + '0');
	}
	}
		_putchar('\n');
	}
}
