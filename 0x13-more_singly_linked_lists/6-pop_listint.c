#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to a pointer to the head node
 *
 * Return: head node’s data (n)
 * 0 if linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int i;

	if (*head == NULL)
		return (0);

	tmp = *head;
	i = tmp->n;
	*head = (*head)->next;
	free(tmp);
	return (i);
}

