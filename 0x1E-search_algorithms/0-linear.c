#include "search_algos.h"
/**
 * linear_search - function that searches for a value in an array
 * of integers using the Linear search algorithm
 * @array: pointer to the first element of the array to search in size
 * @size: the number of elements in array
 * @value:  the value to search for Your function must return
 * the first index where value is located
 *
 * Return: index of valu or -1 if not is found
*/
int linear_search(int *array, size_t size, int value)
{
	size_t idx;

	for (idx = 0; idx < size; idx++)
	{
		printf("Value checked array[%lu] = [%d]\n", idx, array[idx]);
		if (array[idx] == value)
		{
			return (idx);
		}
	}
	return (-1);
}
