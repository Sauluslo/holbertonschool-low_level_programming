#include "holberton.h"
/**
 * more_numbers - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int n;
	int list;

	for (n = 0; n <= 9; n++)
	{
		for (list = 0; list <= 14; list++)
		{
			if (list >= 10)
			{
				_putchar((list / 10) + '0');
			}
			_putchar((list % 10) + '0');
		}
	_putchar('\n');
	}
}
