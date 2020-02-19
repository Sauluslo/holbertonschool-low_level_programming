#include "holberton.h"

/**
 * _puts - check the code for Holberton School students.
 * @str: type char
 *
 * Return: Always 0.
 */
void _puts(char *str)
{
	int cadena;

	for (cadena = 0; str[cadena] != '\0'; cadena++)
	{
		_putchar(str[cadena]);
	}
	_putchar('\n');
}
