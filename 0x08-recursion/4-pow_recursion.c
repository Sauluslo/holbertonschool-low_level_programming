#include "holberton.h"
/**
 * _pow_recursion - check the code for Holberton School students.
 * @x: integer x
 * @y: integer pow.
 *
 * Return: Always 0.
 */
int _pow_recursion(int x, int y)
{
	int pow = x;

	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (x);
	}
	if (y > 1)
	{
		pow = x * _pow_recursion(x, y - 1);
	}
	return (pow);
}
