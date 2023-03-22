#include "main.h"

/**
 * print_sign - "Write a function that prints the sign of a number."
 * @c: the char to be checked
 * Return: 1 if + -1 if - and 0 if 0
 */
int print_sign(int n)
{
        if (n > 0)
        {
                return (+1);
        }
        else if (n < 0)
        {
                return (-1);
        }
	else
	{
		return (0);
	}
}
