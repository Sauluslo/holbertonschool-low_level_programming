#include "holberton.h"
/**
 * _strchr - check the code for Holberton School students.
 * @s: value char 3
 * @c: value char 2
 *
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
	int count;

	for (count = 0; s[count] != '\0'; count++)
	{
		if (s[count] == c)
			return (&s[count]);
	}
	if (s[count] != c)
		return ('\0');
	else
		return (&s[count]);
}
