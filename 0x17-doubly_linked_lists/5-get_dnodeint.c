#include "lists.h"
/**
 * get_dnodeint_at_index - function that print the elements of a DLL.
 * @head: pointer of const dlistint.
 * @index: value of the index.
 *
 * Return: list and number of elements.
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	while (head != NULL)
	{
		if (count == index)
		{
			temp = head;
			return (temp);
		}
		head = head->next;
		count++;
	}
	return (NULL);
}
