#include "lists.h"
/**
 * print_dlistint - function that print the elements of a DLL.
 * @h: pointer of const dlistint.
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
