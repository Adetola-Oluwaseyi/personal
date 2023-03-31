#include "lists.h"

/**
 * add_node_end - adds a new node at the beginning of a list_t list
 * @head: A pointer to the head of the list_t list
 * @str: value of str member in the new node
 *
 * Return:  address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tmp;
	unsigned int i;
	int l;

	tmp = *head;
	while (tmp->next != NULL)
		tmp = (*tmp).next;
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
	new->next = NULL;
	tmp->next = new;

	return (new);
}

