#include <stdio.h>

/**
 * main - First 50 Fibonacci numbers.
 *
 * Return: Always return 0
 *
 */
int main(void)
{
	int num;
	unsigned long fin1 = 0, fin2 = 1, sum;

	for (num = 0; num < 50; num++)
	{
		sum = fin1 + fin2;
		printf("%lu", sum);

		fin1 = fin2;
		fin2 = sum;

		if (num == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
