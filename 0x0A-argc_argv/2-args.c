#include <stdio.h>

/**
 * main - prints all argument it recieves.
 * @argc: The argument supplied to the program.
 * @argv: An array of pointer to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int arg;

	for (arg = 0; arg < argc; argc++)
		printf("%s\n", argv[arg]);
	return (0);
}
