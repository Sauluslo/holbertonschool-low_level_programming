#include "lists.h"
/**
 * free_listint - function to free head memory used.
 * @head: pointer to head of struct listint_t type..
 *
 * Return: always successful.
*/
void free_listint(listint_t *head)
{
	listint_t *aux = NULL, *aux2 = NULL;

	if (head == NULL)
		return (0);
	aux = *head;
	while (aux != NULL)
	{
		aux2 = aux;
		head = aux->next;
		free(aux2);
	}
	*head = aux;
}
