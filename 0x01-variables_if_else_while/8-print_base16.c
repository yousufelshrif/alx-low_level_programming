#include <stdio>

/**
 * main - "Write a program that prints all the numbers of
 * base 16 in lowercase,
 * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = 48; num <= 64; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
