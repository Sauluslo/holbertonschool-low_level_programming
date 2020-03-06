#include "holberton.h"
#include <stdlib.h>
/**
 * string_nconcat - función que concatene dos cadenas.
 * @s1: destination for concat.
 * @s2: source of string
 * @n: integer type dor size of n byte
 *
 * Return: Returns a pointer to the allocated memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	int x, y, long1, long2, ui = n;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (long1 = 0; s1[long1] != '\0'; long1++)
	{
		;
	}
	for (long2 = 0; s2[long2] != '\0'; long2++)
	{
		;
	}
	if (ui >= long2)
	{
		ui = long2;
		p = malloc(sizeof(char) * (long1 + long2 + 1));
	}
	else
	{
		p = malloc(sizeof(char) * (long1 + ui + 1));
	}
	if (p == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < long1; x++)
	{
		p[x] = s1[x];
	}
	for (y = 0; y < ui; y++)
	{
		p[x++] = s2[y];
	}
	p[x++] = '\0';
	return (p);
}
