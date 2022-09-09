#include <stdio.h>

/**
 * main - Prints the size of many  var types
 *
 * Return: 0
 */
int main(void)
{
	char a;
	int b;
        long long int c;
        float d;
	long int e;


	printf("Size of a char: %d byte(s)\n", sizeof(a));
        printf("Size of an int: %d byte(s)\n", sizeof(b));
	printf("Size of a long long int: %d byte(s)\n", sizeof(c));
	printf("Size of a float: %d byte(s)\n", sizeof(d));
	print("Size of long int: %byte(s)\n", sizeof(e));
	return (0);
}
              	
