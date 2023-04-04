#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to the head node
 * @index: index of the node being searched for
 *
 * Return: pointer to the nth node
 * NULL if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp;

	if (head == NULL)
		return (NULL);
	tmp = head;
	for (i = 0; (i != index) && (tmp->next != NULL); i++)
	{
		tmp = tmp->next;
	}
	if (i != index)
		return (NULL);
	return (tmp);
}

