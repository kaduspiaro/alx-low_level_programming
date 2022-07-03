#include <stdio.h>
/**
 * main - print alphabet in lowercase
 *
 *Description: use to print alphabet from a to z
 *
 *Return: return integer value 0
 *
 */
int main(void)
{
	int abet;

	for (abet = 'a'; abet <= 'z'; abet++)
	{
		putchar(abet);
	}
	putchar('\n');
	return (0);
}
