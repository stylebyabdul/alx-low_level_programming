#include <stdio>

/**
 * main - print var type of computer
 *
 * return: 0
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
	printf("Size of a long long int: %d byte(s)", sizeof(c));
	printf("Size of a float: %d byte(s)", sizeof(d));
	print("Size of long int: %byte(s)", sizeof(e));
	return (0);
}
              	
