#include <stdio.h>

/**
 * main - "Write a program that prints the alphabet in lowercase,
 * followed by a new line.
 * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
		if (num != 57)
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
