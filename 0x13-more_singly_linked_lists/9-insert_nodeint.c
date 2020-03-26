#include "lists.h"
/**
 * insert_nodeint_at_index - prints all the elements of a list_t list.
 * @head: pointer to print list.
 * @idx: strings
 * @n: position n in index.
 *
 * Return: the number of nodes.
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp;
	unsigned int count;

	new = malloc(sizeof(listint_t));
	temp = *head;
	if (idx == 0)
	{
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}
	count = 0;
	while (idx > 1)
	{
		idx--;
		count++;
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
	}
	new->n = n;
	new->next = temp->next;
	temp->next = new;
	return (new);
}
