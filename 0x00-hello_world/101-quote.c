#include <stdio.h>
#include <unistd.h>
/**
 * main - Use to return the integer value 1
 *
 *Description: use to print to standard output in the main function
 *
 * Return: return the value 1
 *
 */

int main(void)
{
char str1[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2, str1, 59);
return (1);
}
