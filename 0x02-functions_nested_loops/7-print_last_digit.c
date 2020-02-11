#include "holberton.h"
/**
 * print_last_digit - check the code for Holberton School students.
 * @l: the character c
 * Return: Always 0.
 */
int print_last_digit(int l)
{
	int t = l % 10;
	int d = 0;

	if (t < 0)
	{
		d = t * -1;
		_putchar(d + '0');
		return (d);
	}
	else
	{
		d = t * 1;
		_putchar(d + '0');
		return (d);
	}
}
