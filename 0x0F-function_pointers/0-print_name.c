#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - function pointer to print name.
 * @name: type char of pointer.
 * @f: pointer to function.
 *
 * Return: Print name Always successful.
*/
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
	{
		return;
	}
	f(name);
}
