#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print the number if it positive, zero or negative
 *
 * description: using the main function
 * this program print "programming is positive, zero or negative
 * return: Always 0
 */
int main(void)
{
	int n;
	int l;


	srand time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;

	/* check the numer condition */
	if (l > 5)
	{
		/* if condition is true print the following */
		printf("last digit of %d is %d and is greater than 5/n", n, l);
	}
	else if (1 == 0)
	{
		/* if condition is true print the following */
		printf("last digit of %d is %d and is 0/n", n, l);
	}
	else
	{
		/* if the condition is false print the following */
		printf("last digit of %d is %d and is less than 6 and 0/n", n, l);
	}
	return (0)
}
