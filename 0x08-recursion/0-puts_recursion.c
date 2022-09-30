#include "main.h"

/**
 * _puts_recursion - Prints a string, followed by a new line.
 * @s: string to be printed
 */
void _puts_recursion(char *s)
{

	if (*s == '\0')

		putchar('\n');
	else
	{
		putchar(s[0]);
		_puts_recursion(s + 1);
	}
}
