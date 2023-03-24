#include "main.h"

/**
 * print_size - prints square with #
 * @size: the side length of the square
 * Return: empty
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
		_putchar('#');
		}
	_putchar('\n');
	}
	}
}
