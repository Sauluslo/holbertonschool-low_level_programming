#include "holberton.h"
/**
 * print_rev - check the code for Holberton School students.
 * @s: value cadena.
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int cadena;

	for (cadena = 0; s[cadena] != '\0'; cadena++)
	{
	}
	cadena--;
	while (s[cadena] != 0)
	{
		_putchar(s[cadena]);
		cadena--;
	}
	_putchar('\n');
}
