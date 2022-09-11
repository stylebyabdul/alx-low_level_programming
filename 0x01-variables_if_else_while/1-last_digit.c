#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints the last digit of randomly generated number 
 * and whether it greater than 5, or less than 6, or 0.
 *
 * Description: using the main function.
 * this program prints "programming is greater than 5, less than 6, or 0.
 * return: Always 0.
 */
int main(void)
{
	int n;
	int l;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;

	/* check the numer condition */
	if (l > 5)
	{
		/* if condition is true print the following */
		printf("last digit of %d is %d and is greater than 5\n", n, l);
	}
	else if (l < 6 && l != 0)
	{
		/* if condition is true print the following */
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, l);
	}
	else
	{
		/* if the condition is false print the following */
		printf("last digit of %d is %d and is 0\n", n, l);
	}
	return (0);
}
