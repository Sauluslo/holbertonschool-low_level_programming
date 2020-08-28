#include "search_algos.h"
/**
 * print_array - function that searches for a value in an array
 * of integers using the Linear search algorithm
 * @array: pointer to the first element of the array to search in size
 * @size: the number of elements in array
 *
 * Return: index of valu or -1 if not is found
*/
void print_array(int *array, size_t size)
{
	size_t idx;

	printf("Searching in array: ");
	for (idx = 0; idx < size; idx++)
	{
		if (idx > 0 && idx < size)
			printf(", ");
		printf("%d", array[idx]);
	}
	printf("\n");
}
/**
 * binary_search - function that searches for a value in an array
 * of integers using the Linear search algorithm
 * @array: pointer to the first element of the array to search in size
 * @size: the number of elements in array
 * @value:  the value to search for Your function must return
 * the first index where value is located
 *
 * Return: index of valu or -1 if not is found
*/
int binary_search(int *array, size_t size, int value)
{
	size_t start;
	size_t mid;
	size_t end;

	if (array)
	{
		start = 0;
		end = size - 1;
		while (start <= end)
		{
			print_array(array + start, end + 1 - start);
			mid = (start + end) / 2;

			if (array[mid] < value)
			{
				start = mid + 1;
			}
			else if (array[mid] > value)
			{
				end = mid - 1;
			}
			else
			{
				return (mid);
			}
		}
	}
	return (-1);
}
