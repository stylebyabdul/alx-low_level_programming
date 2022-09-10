#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print if the number is positive negative or zero
 *
 * Description using the main function
 * this program prints "programimg is positive, zero, or negative
 * Return: Always 0
 */
int main(void)
{
	int n;


	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* check the number condition */
	if (n > 0)
	{
		/* if condition is true then print the following */
		printf("%i is positive\n", n);
	}
	else if (n < 0)
	{
		/* if condition is true then print the following */
		printf("%i is negative\n", n);
	}
	else if (n == 0)
	{
		/* if condition is true the print the following */
		printf("%i is zero\n", n);
	}
	return (0);
}
