#include "holberton.h"
/**
 * print_alphabet - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char a = 'a';
	char b = 'z';

	char moe;

	for (moe = a; moe <= b; moe++)
	{
		_putchar(moe);
	}
	_putchar('\n');
}
