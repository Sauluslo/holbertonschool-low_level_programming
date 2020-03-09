#ifndef DOG_HOL
#define DOG_HOL
/**
 * struct dog - Structure contain name, age owner of my dog.
 * @name: Name of my dog.
 * @owner: Name.
 * @age: Age of my dog.
 *
*/
struct dog
{
	char *name, *owner;
	float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
