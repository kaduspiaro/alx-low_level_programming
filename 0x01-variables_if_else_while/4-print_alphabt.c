#include <stdio.h>
#include <ctype.h>
/**
 * main - return alphabets expect e and q
 *
 * Description: print the required results
 *
 * Return: integer value 0
 *
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
		{
			putchar(letter);
		}
	}
	putchar('\n');
	return (0);
}
