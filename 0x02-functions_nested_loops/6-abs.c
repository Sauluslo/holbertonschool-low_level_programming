#include "holberton.h"
/**
 * _abs - check the code for Holberton School students.
 * @x: the character c
 * Return: Always 0.
 */
int _abs(int x)
{
	if (x < 0)
	{
		return (x * -1);
	}
	else
	{
		return (x);
	}
}
