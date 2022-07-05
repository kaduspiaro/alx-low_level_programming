#include "main.h"
/**
 * _islower - check to see if c meets cartain condition
 *
 * @c: Character to check
 * Return: 1 if it is lowercase, 0 otherwise.
 *
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
