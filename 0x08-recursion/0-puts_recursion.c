#include "holberton.h"
/**
 * _puts_recursion - The standard library provides a similar function:
 * puts. Run man puts to learn more.
 * @s: string a recorrer.
 *
 */
void _puts_recursion(char *s)
{
	if (*s != 0)
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
	{
		_putchar('\n');
	}
}
