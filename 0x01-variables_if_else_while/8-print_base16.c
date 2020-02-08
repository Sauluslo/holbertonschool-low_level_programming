#include <stdio.h>
#include <math.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = '0';
	char a = 'a';

	for (n = 0; n < 10; n++)
	{
		putchar (n + '0');
		for (a = a; a <= 'f'; a++)
		{
			putchar (a);
		}
	}
	putchar('\n');
	return (0);
}
