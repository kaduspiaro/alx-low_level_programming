#include <stdio.h>
/**
 * main - A program that prints the number of arguments passed into it
 * @argc: Counts the number of arguments
 * @argv: An array that points to the argument
 * Return: Always 0
 *
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
