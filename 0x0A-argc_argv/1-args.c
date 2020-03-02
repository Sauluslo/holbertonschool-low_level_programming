#include <stdio.h>
/**
 * main - Write a program that prints its name, followed by a new line.
 * @argc: size of argv
 * @argv: array of size argc
 *
 * Return: name.
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
