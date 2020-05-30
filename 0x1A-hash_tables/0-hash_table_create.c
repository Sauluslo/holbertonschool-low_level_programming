#include "hash_tables.h"
/**
 * hash_table_create - function that creates a hash table.
 * @size: size of a hash table.
 *
 * Return: Pointer to newly create hash table.
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int count;
	hash_table_t *new_table = NULL;

	new_table = malloc(sizeof(hash_table));
	if (new_table == NULL)
	{
		return (NULL);
	}

	new_table->size = size;
	new_table->array = malloc(sizeof(hash_table_t *) * size);
	if (new_table == NULL)
	{
		free(new_table);
		return(NULL);
	}
	for (count = 0; count < size; count++)
	{
		new_table->array[count] = NULL;
	}
	return(new_table);
}
