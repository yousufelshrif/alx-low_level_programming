#include <stdlib.h>
#include <time.h>

/**
 * main - "program will assign a random number to the variable n each time
 *  it is executed. Complete the source code in order to print whether the 
 *  number stored in the variable n is positive or negative.
 *  Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n>0)
	{
		printf("%dis positive",n);
	}
	else if (n<0)
	{
		printf("%dis negative,n");
	}
	else
	{
		printf("%dis zero",n);
	}
	return (0);
}
