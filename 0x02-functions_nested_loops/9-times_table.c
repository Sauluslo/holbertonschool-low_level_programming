#include "holberton.h"
/**
 * times_table - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int d;
	int u;
	int o;

	for (d = 0; d <= 9; d++)
	{
		for (u = 0; u <= 9; u++)
		{
			o = d * u;

			if (u > 0)
			{
				_putchar(',');
				_putchar(' ');
				if (o < 10)
				{
					_putchar(' ');
				}
			}

			if (o >= 10)
			{
				_putchar(o / 10 + '0');
				_putchar(o % 10 + '0');
			}
			else
			{
				_putchar(o + '0');
			}
		}
		_putchar('\n');
	}
}
