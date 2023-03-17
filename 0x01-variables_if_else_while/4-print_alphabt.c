#include <stdio.h>

/**
 * main - "Write a program that prints the alphabet in lowercase, followed by a new line.
 * Return: Always 0
 */
int main(void)
{
	char i;
	for (i = 97; i <= 122; i++)
	{
		if (i == 113 || i == 101)
		{
			break;	
		}
		else
		{
			putchar(i);
		}
		putchar('\n');
	}
}
