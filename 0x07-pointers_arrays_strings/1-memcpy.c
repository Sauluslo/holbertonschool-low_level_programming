#include "holberton.h"
/**
 * _memcpy - The _memcpy() function copies n bytes
 * from memory area src to memory area dest
 * @dest: the address of memory to print
 * @src: value 2
 * @n: value integer unsigned.
 *
 * Return: Nothing.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
	{
		dest[count] = src[count];
	}
	return (dest);
}
