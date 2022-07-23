#include <stdio.h>
/**
 * main - A program that prints all arguments it receives
 *
 * @argc: Counts the number of arguments
 * @argv: An array of pointer of the argument
 * Return: Always 0
 *
 */
int main(int argc, char *argv[])
{
	int arg;

	for (arg = 0; arg < argc; arg++)
		printf("%s\n", argv[arg]);

	return (0);
}
