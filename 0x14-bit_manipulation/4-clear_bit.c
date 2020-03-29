#include "holberton.h"
/**
 * clear_bit - function that prints the binary representation of a number.
 * @n: unsigned long int type.
 * @index: unsigned int.
 *
 * Return: always successful.
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int tru = 1;
	unsigned int size = sizeof(n) * 8;

	if (*n == '\0')
		return (-1);
	if (index > size)
		return (-1);
	tru <<= index;
	*n &= ~tru;
	return (1);
}
