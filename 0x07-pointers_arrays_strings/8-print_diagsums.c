#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums- suma the diagonals values.
 * @a: pointer to array of int type
 * @size: int type
 *
 * Return: suma of twos sizes.
 */
void print_diagsums(int *a, int size)
{
	int x;
	int y;
	int suma;
	int sumab;

	suma = 0;
	sumab = 0;

	for (x = 0; x < size; x++)
	{
		suma += a[(size + 1) * x];
	}
	for (y = 0; y < size; y++)
	{
		sumab += a[(size - 1) * (y + 1)];
	}
	printf("%d, %d\n", suma, sumab);
}
