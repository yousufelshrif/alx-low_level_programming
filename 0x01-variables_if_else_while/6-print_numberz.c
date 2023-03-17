#include <stdio.h>

/**
 * main - "Write a program that prints the alphabet in lowercase,
 * followed by a new line.
 * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
	putchar((char)num);
	}
	putchar('\n');

	return (0);
}
