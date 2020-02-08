#include <stdio.h>
#include <math.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	while (n < 10)
	{
		putchar (n + '0');
		if (n < 9)
		{
		putchar (44);
		putchar (32);
		}
		n++;
	}
	putchar('\n');
	return (0);
}
