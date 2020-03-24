#include "lists.h"
/**
 * add_node - function that prints all the elements of a list_t list.
 * @head: pointer to print list.
 * @str: strings
 *
 * Return: the number of nodes.
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
