#include "holberton.h"

/**
 * print_line - check the code for Holberton School students.
 * @n: is the number of times the character
 * Return: Always 0.
 */
void print_line(int n)
{
	int x;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
