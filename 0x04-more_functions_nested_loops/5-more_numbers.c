#include "main.h"

/**
 * most_numbers - print numbers from 0 to 14 10 times
 */

void more_numbers(void)
{
	int i, j, a;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				a = j % 10;
				_putchar('1');
				_putchar(a + '0');
			}
			else
			_putchar(j + '0');
		}
		_putchar('\n');
	}
}
