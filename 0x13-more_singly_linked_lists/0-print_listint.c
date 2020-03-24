#include "lists.h"
/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: pointer to print list.
 *
 * Return: the number of nodes.
*/
size_t print_listint(const listint_t *h)
{
	unsigned int nodes;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
