#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - a function that allocates memory using malloc.
 * @nmemb: the address of memory to print
 * @size: integer size.
 *
 * Return: Returns a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p;
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
	for (count = 0; count < nmemb * size; count++)
	{
		p[count] = 0;
	}
	return (p);
}
