#include <stdio.h>

/*
 * main - Prints all the diffent combination of three digits.
 *
 * Return: Always 0.
 */
int main(void)
{
	int digit1 ,digit2, digit3;

	for (digit1 = 0; digit1 < 3; digit1++)
	{
		for (digit2 = 0; digit2 < 3; digit2++)
		{
		       	for (digit3 = 0; digit3 < 3; digit3++)
			{
				putchar((digit1 % 10) + '0');
				putchar((digit2 % 10) + '0');
				putchar((digit3 % 10) + '0');

				if (digit1 != digit2 && digit2 != digit3 && digit3 && digit1)
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
		       	       
