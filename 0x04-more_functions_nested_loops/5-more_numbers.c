#include "main.h"
/**
 * more_number - prints 10  times of the number, form 1 to 14
 */
void more_numbers(void)
{
	int num;
	int result;

	for (num = 0; num <= 9; num++)
	{
		for (result = 0; result <= 14; result++)
		{
			if (result > 9)
				_putchar((result / 10) + '0');
			_putchar((result % 10) + '0');
		}
		_putchar('\n');
	}
}
