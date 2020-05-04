#include "lists.h"
/**
 * free_dlistint - function that free a dlistint_t list.
 * @head: pointer head of a DLL.
 *
 * Return: void, function free allocated memory on head.
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tempo;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		tempo = head;
		head = head->next;
		free(tempo);
	}
}
