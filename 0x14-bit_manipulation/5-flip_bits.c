#include "holberton.h"
/**
 * count_bit - function that prints the binary representation of a number.
 * @n: unsigned long int type.
 *
 * Return: always successful.
*/
unsigned int count_bit(unsigned long int n)
{
	unsigned int count = 0;

	while (n)
	{
		count += n & 1;
		n >>= 1;
	}
	return (count);
}
/**
 * flip_bits - function that prints the binary representation of a number.
 * @n: unsigned long int type.
 * @m: unsigned int.
 *
 * Return: always successful.
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (count_bit n ^ m);
}
