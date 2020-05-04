#include "lists.h"
/**
 * add_dnodeint - function that adds a new node at the beginning 
 * of a dlistint_t list.
 * @head: pointer head of the DLL
 * @n: const int
 *
 * Return: New node and if is failure NULL
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp, *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
		return (*head);
	}
	temp = *head;
	new->next = temp;
	temp->prev = new;
	*head = new;
	return (new);
}
