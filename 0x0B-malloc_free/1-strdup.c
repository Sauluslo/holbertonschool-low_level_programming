#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - check the code for Holberton School students.
 * @a: array a contar
 * Return: Always 0.
 */
int _strlen(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		;
	}
	return (i);
}

/**
 * _strdup - check the code for Holberton School students.
 * @str: array value
 * Return: Always 0.
 */
char *_strdup(char *str)
{
	char *s;
	int x, i;

	x = _strlen(str);
	if (str == NULL)
	{
		return (NULL);
	}

	s = malloc(sizeof(char) * x + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= x; i++)
	{
		s[i] = str[i];
	}
	return (s);
}
