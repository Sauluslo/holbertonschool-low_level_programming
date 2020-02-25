#include "holberton.h"
/**
 * _strpbrk - The _strpbrk() function locates the first occurrence
 * in the string s of any of the bytes in the string accept
 * @s: poiter.
 * @accept: value char 2
 *
 * Return: Always 0.
 * @ps: pointer a c1.
 */
char *_strpbrk(char *s, char *accept)
{
	int c1;
	int c2;
	char *ps;

	for (c1 = 0; s[c1] != '\0'; c1++)
	{
		for (c2 = 0; accept[c2] != '\0'; c2++)
		{
			if (s[c1] == accept[c2])
			{
				ps = &s[c1];
				return (ps);
			}
		}
	}
	return ('\0');
}
