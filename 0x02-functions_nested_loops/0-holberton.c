#include "holberton.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char hol[] = "Holberton";
	int i;

	for (i = 0; hol[i] != '\0'; i++)
	{
		_putchar(hol[i]);
	}
	_putchar('\n');
	return (0);
}
