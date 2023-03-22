#include "main.h"

/**
 *  print_last_digit- "Write a function that prints the last digit of a number."
 * @n: the number to be checked
 * Return: last digit of the number
 */
int print_last_digit(int n)
{
	int last = n % 10;

	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
