#include "main.h"

/**
 * _isalpha - "Write a function that checks for alphabetic character."
 * @c: the char to be checked
 * Return: 1 if alphabit and 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
