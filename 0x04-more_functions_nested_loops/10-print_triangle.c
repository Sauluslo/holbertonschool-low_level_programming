#include "holberton.h"
/**
 * print_triangle - check the code for Holberton School students.
 * @size: is the number of times the character
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int d;
	int x;

	if (size > 0)
	{
		for (d = size; d > 0; d--)
		{
			for (x = 0; x < size; x++)
			{
				if (x < d - 1)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
