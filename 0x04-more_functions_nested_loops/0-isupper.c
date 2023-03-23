#include <ctype.h>

/**
 * _isupper - cheak if the passed number is uppercase ascii
 * @c: the number passed to be tested
 * Return: 0 if lowercase and 1 if uppercase
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	return (0);
}
