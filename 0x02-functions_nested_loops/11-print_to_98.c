#include <stdio.h>

/**
 * print_to_98 - "Write a function that prints all natural
 * numbers from n to 98, followed by a new line."
 * @n: "current number"
 * Return: Always void
 */
void print_to_98(int n)
{
	if (n == 98)
	{
	printf("98");
	}
	if (n < 98)
	{
	for (; n < 98; n++)
	{
	if (n == 97)
	{
	printf("97, 98");
	}
	else
	{
	printf("%d ,", n);
	}
	}
	}
	if (n > 98)
	{
	for (; n > 98; n--)
	{
	if (n == 99)
	{
	printf("99, 98");
	}
	else
	{
	printf("%d ,", n);
	}
	}
	}
	printf("\n");
}
