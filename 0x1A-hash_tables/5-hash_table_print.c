#include "hash_tables.h"
/**
 * hash_table_print - function that prints a hash table.
 * @ht: hash table to be printed.
 *
 * Return: Printed elements of the hash table.
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0;
	unsigned int iterator = 0;
	hash_node_t *temp;

	if (!ht)
		return;
	printf("{");
	while (index < ht->size)
	{
		temp = ht->array[index];
		while (temp != NULL)
		{
			if (iterator == 1)
			{
				printf(", ");
			}
			printf("'%s': '%s'", temp->key, temp->value);
			iterator = 1;
			temp = temp->next;
		}
		index++;
	}
	printf("}\n");
}
