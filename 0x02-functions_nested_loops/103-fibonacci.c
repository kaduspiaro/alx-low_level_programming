#include <stdio.h>

/**
 * main - Prints the sum of even-valued Fibonacci sequence
 * term not exceeding 4000000.
 *
 * Return: Always return 0.
 */

int main(void)
{
	unsigned long fin1 = 0, fin2 = 1, finsum;
	float al_sum;

	while (1)
	{
		finsum = fin1 + fin2;
		if (finsum > 4000000)
			break;

		if ((finsum % 2) == 0)
			al_sum += finsum;

		fin1 = fin2;
		fin2 = finsum;
	}
	printf("%.0f\n", al_sum);

	return (0);
}
