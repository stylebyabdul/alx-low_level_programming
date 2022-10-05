#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the multiplication of two numbers, followed by a new line.
 * @argc: the number of argument supplied to the program.
 * @argv: An array of pointer to the arguments.
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num1, num2 prod;

	if (argc != 3)
		printf("Error\n");
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		prod = num_1 * num_2;
		printf("%d\n", prod);
	}
	return (0);
}
