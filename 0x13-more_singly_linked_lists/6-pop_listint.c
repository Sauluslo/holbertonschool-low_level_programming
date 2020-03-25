#include "lists.h"
/**
 * pop_listint - function to free head memory used.
 * @head: pointer to head of struct listint_t type..
 *
 * Return: always successful.
*/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
		return (0);
	temp = *head;
	data = (*head)->n;
	*head = (*head)->next;
	free(temp);
	return (data);
}
