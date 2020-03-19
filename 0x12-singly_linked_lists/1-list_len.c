#include "lists.h"
/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: pointer to print list.
 *
 * Return: the number of nodes.
*/
size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
