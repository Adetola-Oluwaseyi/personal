#include "lists.h"

/**
 * listint_len -  returns the number of elements in a linked listint_t list
 * @h: pointer to head node of the list
 *
 * Return: number of elements in the linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t i;
	listint_t *tmp;

	if (h == NULL)
		return (0);

	tmp = (listint_t *) h;
	for (i = 0; tmp != NULL; i++)
	{
		tmp = tmp->next;
	}

	return (i);
}

