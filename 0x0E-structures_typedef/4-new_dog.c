#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - this is
 * @name: name my dog.
 * @age: Age of my dog.
 * @owner: i am owner.
 *
 * Return: new dog in the case is true.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	int x, y, z;

	dog_t *newdog;

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
	{
		return (NULL);
	}
	for (x = 0; name[x] != '\0'; x++)
		;
	for (y = 0; owner[y] != '\0'; y++)
		;
	newdog->name = malloc(sizeof(char) * x + 1);
	if (newdog->name == NULL)
	{
		free(newdog);
		return (NULL);
	}
	newdog->owner = malloc(sizeof(char) * y + 1);
	if (newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}
	for (z = 0; z < x; z++)
		newdog->name[z] = name[z];
	newdog->name[z] = '\0';
	newdog->age = age;
	for (z = 0; z < y; z++)
		newdog->owner[z] = owner[z];
	newdog->owner[z] = '\0';
	return (newdog);
}
