#include "holberton.h"

int main(void)
{
	char hol[] = "Holberton";
	int i;

	for(i = 0; hol[i] != '\0'; i++)
	{
		_putchar(hol[i]);
	}
	_putchar('\n');
	return(0);
}
