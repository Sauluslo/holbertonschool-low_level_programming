#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - function that prints numbers.
 * @separator: type char.
 * @n: integer n.
 * Return: if (n == 0) Return 0.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int j;
	int x;

	va_start(num, n);
	for (j = 0; j < n; j++)
	{
		x = va_arg(num, int);
		if (separator == NULL)
			printf("%d", x);
		else if (j < (n - 1))
			printf("%d%s", x, separator);
		else
			printf("%d", x);
	}
	printf("\n");
	va_end(num);
}
