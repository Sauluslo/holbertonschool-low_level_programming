#include <stdio.h>
#include "dog.h"
/**
 * main - program that prints file name.
 *
 * Return: 0 always.
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != '\0')
	{
		d->name = name;
		(*d).owner = owner;
		d->age = age;
	}
}
