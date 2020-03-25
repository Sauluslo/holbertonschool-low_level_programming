#include "lists.h"
/**
 * sum_listint - function to free head memory used.
 * @head: pointer to head of struct listint_t type.
 *
 * Return: always successful is sum.
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
