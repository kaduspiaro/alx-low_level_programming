#include <stdio.h>

/**
 * main - Print the first 98 Fibonacci numbers startig
 * wit 1 and 2, sperated by comma and space.
 *
 * Return: Always return 0.
 *
 */

int main(void)
{
	int num;
	unsigned long fin1 = 0, fin2 = 1, sum;
	unsigned long fin1_half1, fin1_half2, fin2_half1, fin2_half2;
	unsigned long half1, half2;

	for (num = 0; num < 92; num++)
	{
		sum = fin1 + fin2;
		printf("%lu, ", sum);

		fin1 = fin2;
		fin2 = sum;
	}

	fin1_half1 = fin1 / 10000000000;
	fin2_half1 = fin2 / 10000000000;
	fin1_half2 = fin1 % 10000000000;
	fin2_half2 = fin2 % 10000000000;

	for (num = 93; num < 99; num++)
	{
		half1 = fin1_half1 + fin2_half1;
		half2 = fin1_half2 + fin2_half2;
		if (fin1_half2 + fin2_half2 > 9999999999)
		{
			half1 += 1;
			half2 %= 10000000000;
		}

		printf("%lu%lu", half1, half2);
		if (num != 98)
			printf(", ");

		fin1_half1 = fin2_half1;
		fin1_half2 = fin2_half2;
		fin2_half1 = half1;
		fin2_half2 = half2;
	}
	printf("\n");
	return (0);
}
