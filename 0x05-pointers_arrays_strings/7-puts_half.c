#include "holberton.h"

/**
 * puts_half - check the code for Holberton School students.
 * @str: string char.
 *
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int cadena;

	for (cadena = 0; str[cadena] != '\0'; cadena++)
	{
	}
	cadena++;
	for (cadena /= 2; str[cadena] != '\0'; cadena++)
	{
		_putchar(str[cadena]);
	}
	_putchar('\n');
}
