#include "main.h"

/**
 * print_alphabet_x10 - "Write a function that
 * prints10 times the alphabet"
 * Returs: Always 0
 */
void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}	
}
