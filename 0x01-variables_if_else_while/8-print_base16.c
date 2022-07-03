#include <stdio.h>
/**
 * main - return the results of thr function
 *
 * Description: print the hexadecimal numbers
 *
 * Return: return the integer value 0
 *
 */
int main(void)
{
	int num;
	char letter;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
	}
	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
