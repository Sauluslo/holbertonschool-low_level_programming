#include "lists.h"
/**
 * sum_dlistint - function that returns the sum of all the data (n)
 * of a dlistint_t linked list.
 * @head: pointer of const dlistint.
 *
 * Return: list and number of elements.
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
