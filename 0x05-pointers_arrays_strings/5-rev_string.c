#include "holberton.h"
#include <stdio.h>
/**
 * _strlen - check the code for Holberton School students.
 * @s: vartype char.
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int c;

	c = 0;
	while (*(s + c) != '\0')
	{
		c++;
	}
	return (c);
}
/**
 * rev_string - check the code for Holberton School students.
 * @s: vartype char.
 *
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int x, y;
	char a;

	x = _strlen(s);
	x--;
	for (y = 0; y < x; y++)
	{
		a = s[x];
		s[x] = s[y];
		s[y] = a;
		x--;
	}
}
