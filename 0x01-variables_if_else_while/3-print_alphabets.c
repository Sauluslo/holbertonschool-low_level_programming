#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char abc = 'a';
	char ABC = 'A';

	while (abc <= 'z')
	{
		putchar(abc);
		abc++;
	}
	while (ABC <= 'Z')
	{
		putchar(ABC);
		ABC++;
	}
	putchar('\n');
	return (0);
}
