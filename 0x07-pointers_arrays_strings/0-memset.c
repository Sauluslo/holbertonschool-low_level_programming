#include "holberton.h"
#include <stdio.h>

/**
 * *_memset - The _memset() function fills the first n bytes of the memory area pointed to by s with the constant byte b.
 * @s: the address of memory to print
 * @b: value of caracter for change
 * @n: value unsigned integer
 *
 * Return: s..
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count;

	for(count = 0; count < n; count++)
	{
		s[count] = b;
	}
	return (s);
}
