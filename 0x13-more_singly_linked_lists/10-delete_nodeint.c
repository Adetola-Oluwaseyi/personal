#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * index of a listint_t linked list
 * @head: pointer to the pointer to the head node of the list
 * @index: index of node to be deleted
 *
 * Return: 1 if successful, 0 if not
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp, *prev;

	if (*head == NULL)
		return (-1);
	tmp = *head;
	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}
	for (i = 0; i < index && tmp->next != NULL; i++)
	{
		prev = tmp;
		tmp = tmp->next;
	}
	if (i < index)
		return (-1);
	prev->next = tmp->next;
	free(tmp);
	return (1);
}
