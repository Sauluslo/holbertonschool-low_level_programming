#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - prints buffer in hexa
 * @size: the address of memory to print
 * @c: the size of the memory to print
 *
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
	{
		return(NULL);
	}

	s = (char *)malloc(sizeof(c)*size);
	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;	
	}
	return (s);
}
