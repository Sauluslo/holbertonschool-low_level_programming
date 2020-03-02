#include <stdio.h>
/**
 * main - Write a program that prints its name, followed by a new line.
 * @argc: size of argv
 * @argv: array of size argc
 *
 * Return: name.
 */
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
