#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - function to iterate through arrays.
 * @array: type int pointer to array.
 * @size: typedef size_t.
 * @action: pointer to function.
 *
 * Return: Print name Always successful.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int con;

	if (array == NULL)
	{
		return;
	}
	if (action == NULL)
	{
		return;
	}
	if (size <= 0)
	{
		return;
	}
	con = 0;
	while (con < size)
	{
		action(array[con]);
		con++;
	}
}
