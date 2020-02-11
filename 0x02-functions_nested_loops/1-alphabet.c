#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char a = 'a';
	char b = 'z';

	char moe;

	for(moe = a; moe <= b; moe++)
	{
		_putchar(moe);		
	}
	_putchar('\n');
}
