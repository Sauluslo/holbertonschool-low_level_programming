#include "holberton.h"
/**
 * _islower - check the code for Holberton School students.
 * @c: is the lyric c
 * Return: Always 0.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar(c);
	_putchar('\n');
}
