#include "holberton.h"
#include <stdio.h>
/**
 * print_array - check the code for Holberton School students.
 * @a: integer a.
 * @n: integer b.
 *
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
		printf("%i", a[c]);
		if (c < (n - 1))
			printf(",");
	}
	printf("\n");
}
