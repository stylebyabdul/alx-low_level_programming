#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 *
 * return: Always 0.
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putcahr(letter);
	_putchar('\n');
}
