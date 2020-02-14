#include "holberton.h"
/**
 * print_square - check the code for Holberton School students.
 * @size: is the number of times the character
 * Return: Always 0.
 */
void print_square(int size)
{
	int d;
	int x;

	if (size > 0)
	{
		for (d = 0; d < size; d++)
		{
			for (x = 0; x < size; x++)
			{
				if (x < size)
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
