#include <stdio.h>

/**
 * main - - Prints the aplhabet in lowerscase except letter q and e
 *
 * Result: Always 0
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}
	putvhar('\n');

	return (0);
}

