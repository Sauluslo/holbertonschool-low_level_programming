#include "lists.h"
/**
 * print_dlistint - function that print the elements of a DLL.
 * @h: pointer of const dlistint.
 *
 * Return: list and number of elements.
*/
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
