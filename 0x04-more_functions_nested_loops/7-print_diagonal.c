#include "holberton.h"

/**
 * print_diagonal - check the code for Holberton School students.
 * @n: is the number of times the character
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int d;
	int x;

	if (n > 0)
	{
		for (d = 0; d < n; d++)
		{
			for (x = 0; x <= d; x++)
			{
				if (x != d)
					_putchar(' ');
				else
					_putchar(92);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
