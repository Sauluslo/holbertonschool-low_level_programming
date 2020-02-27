#include "holberton.h"
/**
 * _strlen_recursion - Write a function that returns the length of a string.
 * @s: string a recorrer.
 *
 */
int _strlen_recursion(char *s)
{
	int x = 0;

	if (*s != '\0')
	{
		x = _strlen_recursion(s + 1);
		x++;
	}	
	return(x);
}
