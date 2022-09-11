#include <stdio.h>

/**
 * main - Prints the size of many  various types base on
 *        the computer it is compiled and run on.
 *
 * Return: Always 0.
 */
int main(void)
{
	char c;
	int i;
	long long int ll;
	float f;
	long int l;
	printf("Size of a char: %d byte(s)\n", sizeof(c));
	printf("Size of an int: %d byte(s)\n", sizeof(i));
	printf("Size of a long int: %d byte(s)\n", sizeof(l));
	printf("Size of a long long int: %d byte(s)\n", sizeof(ll));
	printf("Size of a float: %d byte(s)\n", sizeof(f));
	return (0);
}             	
