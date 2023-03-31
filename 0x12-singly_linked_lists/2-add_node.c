#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to pointer to the head node
 * @str: value of str member in the new node
 *
 * Return: address of the new element
 * NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int i;

	if (str == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	for (i = 0; str[i]; i++)
	{
	}
	new->len = i;
	new->next = *head;

	*head = new;

	return (new);
}
