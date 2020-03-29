#include "holberton.h"
/**
 * set_bit - function that prints the binary representation of a number.
 * @n: unsigned long int type.
 * @index: unsigned int.
 *
 * Return: always successful.
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
	{
		*n = *n | (1 << index);
		return (1);
	}
	return (-1);
}
