#include "holberton.h"
/**
 * _strspn - Returns the number of bytes in the initial
 * segment of s which consist only of bytes from accept
 * @s: string char.
 * @accept: string char.
 *
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int c1;
	unsigned int c2;
	unsigned int u = 0;

	for (c1 = 0; s[c1] != ' '; c1++)
	{
		for (c2 = 0; accept[c2] != '\0'; c2++)
		{
			if (s[c1] == accept[c2])
				u++;
		}
	}
	return (u);
}
