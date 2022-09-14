#include "main.h"

/**
 * main - write a function that print alphabet in lowercase, follow by a new line.
 *
 * return: Always 0.
 */
void print_alphabet(void)
{
	char letter;
	
	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}
