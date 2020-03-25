#include "lists.h"
/**
 * free_listint - function to free head memory used.
 * @head: pointer to head of struct listint_t type..
 *
 * Return: always successful.
*/
void free_listint(listint_t *head)
{
	listint_t *aux;

	while (head != NULL)
	{
		aux = head;
		head = head->next;
		free(aux);
	}
}
