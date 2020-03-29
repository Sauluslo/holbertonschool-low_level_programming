#include "holberton.h"
/**
 * print_binary - function that prints the binary representation of a number.
 * @n: unsigned long int type.
 *
 * Return: always successful.
*/
void print_binary(unsigned long int n)
{
	unsigned long int dec;
	unsigned int size = sizeof(n) * 8;
	unsigned int count;
	unsigned int flag = 1;

	count = 0;
	while (count < size)
	{
		dec = (n << 1);
		dec >>= 1;
		if (n != dec)
		{
			flag = 0;
			write(1, "1", 1);
		}
		else if (!flag)
			write(1, "0", 1);
		n <<= 1;
		count++;
	}
	if (flag == 1)
		write(1, "0", 1);
}
