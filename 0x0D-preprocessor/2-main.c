#ifndef __FILE__
#define __FILE__
#endif
#include <stdio.h>
/**
 * main - program that prints file name.
 *
 * Return: 0 always.
*/
int main(void)
{
	char *file = __FILE__;

	printf("%s\n", file);
	return (0);
}
