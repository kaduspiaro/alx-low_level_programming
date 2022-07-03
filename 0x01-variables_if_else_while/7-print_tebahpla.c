#include <stdio.h>
/**
 * main - print out the result of the function
 *
 * Description: print out the alphabets in reverse
 *
 * Return: return integer value o
 *
 */
int main(void)
{
	char abet;

	for (abet = 'z'; abet >= 'a'; abet--)
	{
		putchar(abet);
	}
	putchar('\n');
	return (0);
}
