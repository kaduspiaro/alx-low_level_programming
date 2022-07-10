#include "main.h"
/**
 * print_numbers` - Print number from 0 - 9
 *
 */
void print_numbers(void)
{
	int num;

	num = 0;
	while (num < 10)
	{
		_putchar (num + '0');
		num++;
	}
	_putchar ('\n');
}
