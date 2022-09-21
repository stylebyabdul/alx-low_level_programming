#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the charcter c to stdout
 * @c: the charcter to print
 *
 * Return: On success 1.
 * on error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
