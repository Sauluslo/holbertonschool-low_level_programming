#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char abc = 'z';

	while (abc >= 'a')
	{
		putchar(abc);
		abc--;
	}
	putchar('\n');
	return (0);
}
