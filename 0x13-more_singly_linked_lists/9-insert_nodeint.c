#include "lists.h"

/**
 * insert_nodeint_at_index -  inserts a new node at a given position
 * @head: pointer to a pointer to the head node of the list
 * @idx: index where new node is inserted
 * @n: data to be added to the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *tmp, *new;

	if (*head == NULL)
		return (NULL);
	tmp = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx != 0)
		idx--;
	else
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	for (i = 0; i != idx && tmp->next; i++)
	{
		tmp = tmp->next;
	}
	if (tmp->next == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = tmp->next;
	tmp->next = new;

	return (new);
}

