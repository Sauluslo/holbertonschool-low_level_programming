#include "holberton.h"
/**
 * print_alphabet_x10 - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char a = 'a';
	char b = 'z';

	int l;
	char moe;

	for (l = 0; l <= 9; l++)
	{
		for (moe = a; moe <= b; moe++)
		{
			_putchar(moe);
		}
	_putchar('\n');
	}
}
