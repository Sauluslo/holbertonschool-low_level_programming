#include "holberton.h"
/**
 * print_most_numbers - check the code for Holberton School students.
 * 
 * Return: Always 0.
 */
void print_most_numbers(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		if (num != 50 && num != 52)
			_putchar(num);
	}
	_putchar('\n');
}
