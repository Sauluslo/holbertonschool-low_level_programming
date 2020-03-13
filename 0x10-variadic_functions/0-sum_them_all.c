#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: integer unsigned.
 *
 * return: if (n == 0) Return 0.
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list sum_num;
	unsigned int j;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(sum_num, n);
	for (j = 0; j < n; j++)
	{
		sum += va_arg(sum_num, int);
	}
	va_end(sum_num);
	return (sum);
}
