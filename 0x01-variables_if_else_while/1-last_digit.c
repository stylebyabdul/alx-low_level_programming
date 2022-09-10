#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print the number if it positive zero or negative
 *
 * Description: using the main fuction
 * this program prints "programmimg is postive,zero or negative
 * return : Always 0
 */
int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() -RAND_MAX / 2;
	l = n % 10;

	/* check the number condition */
	if (l > 5) 
	{
		/* if condition is true the print the following */
		printf("last digit of %d is %d and is greater than 5\n", n, l);
	}
	else if (l == 0)
	{
		/* if condition is true then print the folloeing */
		printf("last digit of %d is %d and is 0\n", n, l);
	}
	else
	{
		/* if the condition is false esle then print the following */
		printf("last digit of %d is %d and is less 6 and 0\n", n, l);
	}
	return (0)
}
