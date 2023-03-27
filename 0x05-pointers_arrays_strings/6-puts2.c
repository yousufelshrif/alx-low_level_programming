#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every other character of a string, starting with the first character
 * @str: string be printed
 */

void puts2(char *str)
{
	int len = 0, index;

	while (str[len++])
	{
		len++;
	}
	for (index = 0; index <= len -1 && str[index++] ; index += 2)
	{
		printf("%d", str[index]);
	}
}
