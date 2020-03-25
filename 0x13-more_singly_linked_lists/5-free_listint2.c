#include "lists.h"
/**
 * free_listint2 - function to free head memory used.
 * @head: pointer to head of struct listint_t type..
 *
 * Return: always successful.
*/
void free_listint2(listint_t **head)
{
	listint_t *aux = NULL, *aux2 = NULL;

	if (head == NULL)
		return (0);
	aux = *head;
	while (aux != NULL)
	{
		aux2 = aux;
		aux = aux->next;
		free(aux2);
	}
	*head = NULL;
}
