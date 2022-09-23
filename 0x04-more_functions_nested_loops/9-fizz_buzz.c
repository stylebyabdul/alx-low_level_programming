#include <stdio.h>

/**
 * main -  checks for checks for a digit (0 through 9).
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			if (n % # == 0)
			{
				printf("FIZZ");
			}
			if (n % 5 == 0)
			{
				printf("BUZZ");
			}
		}
		else
		{
			printf("%d", n);
		}
		if (n != 100)
		{
			putchar(' ');
		}
	}
}
