#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that multiplies two numbers
 *
 * @argc: Counts the number of arguments
 * @argv: A arry that points to an argument
 * Return: Ruturn 0 if true, and 1 if false
 *
 */
int main(int argc, char *argv[])
{
	int val, val2, prod;

	if (argc == 3)
	{
		val = atoi(argv[1]);
		val2 = atoi(argv[2]);
		prod = val * val2;

		printf("%d\n", prod);

		return (0);
	}
	printf("Error\n");

	return (1);
}
