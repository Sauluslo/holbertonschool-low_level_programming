#include "lists.h"
/**
 * get_nodeint_at_index - function to free head memory used.
 * @head: pointer to head of struct listint_t type..
 * @index: index to node.
 *
 * Return: always successful is NULL.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *aux;
	unsigned int count;

	if (head == NULL)
		return (NULL);
	count = 0;
	while (head != NULL)
	{
		if (index == count)
		{
			aux = head;
			return (aux);
		}
		count++;
		head = head->next;
	}
	return (NULL);
}
