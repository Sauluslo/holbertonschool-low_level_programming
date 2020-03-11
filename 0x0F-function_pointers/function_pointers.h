#ifndef DOG_HOL
#define DOG_HOL
/**
 * struct dog - Structure contain name, age owner of my dog.
 * @name: Name of my dog.
 * @owner: Name.
 * @age: Age of my dog.
 *
*/
typedef struct dog
{
	char *name, *owner;
	float age;
};
void print_name(char *name, void (*f)(char *));
#endif
