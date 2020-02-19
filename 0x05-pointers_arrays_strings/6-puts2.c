#include "holberton.h"

/**
 * puts2 - check the code for Holberton School students.
 * @str: strings type char
 *
 * Return: Always 0.
 */
void puts2(char *str)
{
	int cadena;

	for (cadena = 0; str[cadena] != '\0'; cadena++)
	{
		if (cadena % 2 == 0)
			_putchar(str[cadena]);
	}
	_putchar('\n');
}
