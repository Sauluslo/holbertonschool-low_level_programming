#include <stdio.h>
#include "dog.h"
/**
 * init_dog - program that prints file name.
 * @d: lol
 * @name: lol2
 * @age: lol3
 * @owner: lol4
 *
 * Return: void always.
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
