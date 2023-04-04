#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to the pointer to the head node
 *
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp, *new;

	if (*head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);
	new = (*head)->next;
	(*head)->next = NULL;
	while (new)
	{
		tmp = new->next;
		new->next = *head;
		*head = new;
		new = tmp;
	}
	return (*head);
}

