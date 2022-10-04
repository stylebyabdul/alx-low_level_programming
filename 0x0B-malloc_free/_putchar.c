#include <unistd.h>

/**
 * _putchar - write the charcter c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set approximately.
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
