#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - function to return index of compared integers..
 * @array: pointer to array of type integer.
 * @size: size of array of tpe integer.
 * @cmp: ponter to function of type integer.
 *
 * Return: index number of type integer.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL)
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}
	if (cmp == NULL)
	{
		return (-1);
	}
	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]))
		{
			return (index);
		}
	}
	return (0);
}
