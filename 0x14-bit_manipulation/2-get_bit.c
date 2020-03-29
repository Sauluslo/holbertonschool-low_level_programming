#include "holberton.h"
/**
 * get_bit - function that prints the binary representation of a number.
 * @n: unsigned long int type.
 * @index: unsigned int.
 *
 * Return: always successful.
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int tru = 1;

	if (index > sizeof(n) * 8)
		return (-1);
	tru <<= index;
	if (tru & n)
		return (1);
	else
		return (0);
}
