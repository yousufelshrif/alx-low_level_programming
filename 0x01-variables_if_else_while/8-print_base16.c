#include <stdio.h>

/**
 * main - "Write a program that prints all the numbers of
 * base 16 in lowercase,
 * Return: Always 0
 */
int main(void)
{
	char i;
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	for (i = 'a';i <= 'f'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
