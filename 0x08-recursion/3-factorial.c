#include "holberton.h"
/**
 * factorial - Write a function that returns the factorial of a given number.
 * @n: integer
 *
 * Return: Always 0.
 */
int factorial(int n)
{
	int factor = 1;

	if (n < 0)
	{
		return (-1);
	}
	if (n - 1 > 0)
	{
		factor = n * factorial(n - 1);
	}
	return (factor);
}
