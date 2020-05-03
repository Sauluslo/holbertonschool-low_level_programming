#include "lists.h"
/**
 * dlistint_len - function that print the length of a DLL.
 * @h: pointer const dlistint_t
 *
 * Return: length of the DLL.
*/
size_t dlistint_len(const dlistint_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
