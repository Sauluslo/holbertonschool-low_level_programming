#include "lists.h"
/**
 * add_node - function that prints all the elements of a list_t list.
 * @head: pointer to print list.
 * @str: strings
 *
 * Return: the number of nodes.
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;
	*head = new;
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
