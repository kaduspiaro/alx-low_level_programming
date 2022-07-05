#include "main.h"

/**
 * print_alphabet - prints lowercase alphabet, followed by new line.
 *
 * Description: Lowercase alphabet
 *
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}
