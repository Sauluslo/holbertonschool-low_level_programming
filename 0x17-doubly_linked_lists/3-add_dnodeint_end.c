#include "lists.h"
/**
 * add_dnodeint_end - function that adds a new node at the end
 * of a dlistint_t list.
 * @head: pointer head of the DLL.
 * @n: const int
 *
 * Return: new node, and if is failure NULL.
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *head;

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	new->prev = temp;
	temp->next = new;
	return (new);
}
