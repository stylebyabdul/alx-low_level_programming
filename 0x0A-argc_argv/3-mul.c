#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints multipe of two numners.
 * @argc: the number of argument supplied to the program.
 * @argv: An array of pointer to the arguments.
 *
 * Return: if the program recieve two argument - 0.
 *         if the program does not recive two argument -1.
 */
int main(int argc, char *argv[])
{
	int num1, num2 prod;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	prod = num1 * num2;

	printf("%d\n", prod);

	return (0);
}
