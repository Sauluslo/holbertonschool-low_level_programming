#include "lists.h"
/**
 * listint_len - function that prints all the elements of a list_t list.
 * @h: pointer to print list.
 *
 * Return: the number of nodes.
*/
size_t listint_len(const listint_t *h)
{
	unsigned int nodes;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
