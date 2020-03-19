#include "lists.h"
/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 * @head: pointer to print list.
 * @str: strings
 *
 * Return: the address of the new element, or NULL if it failed.
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *aux;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	aux = *head;

	while (aux->next != NULL)
		aux = aux->next;
	aux->next = new;
	return (new);
}
/**
 * _strlen - check the code for Holberton School students.
 * @s: Pointer s.
 * Return: Always 0.
 */
int _strlen(const char *s)
{
	int v;

	for (v = 0; s[v] != '\0'; v++)
	{
	}
	return (v);
}
