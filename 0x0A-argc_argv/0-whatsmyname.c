#include <stdio.h>
/**
 * main - Write a program that prints its name, followed by a new line.
 * @argc: size of argv
 * @argv: array of size argc
 *
 * Return: name.
 */
int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", argv[0]);
	return (0);
}
