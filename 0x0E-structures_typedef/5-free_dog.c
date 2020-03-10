#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - program that prints file name.
 * @d: lol
 *
 * Return: void always.
*/
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
