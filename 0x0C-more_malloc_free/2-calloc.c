#include "holberton.h"
#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - a function that allocates memory using malloc.
 * @nmemb: the address of memory to print
 * @size: integer size.
 *
 * Return: Returns a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int count;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}
	count = 0;
	while (count < nmemb * size)
	{
		p[count] = 0;
		count++;
	}
	return (p);
}
