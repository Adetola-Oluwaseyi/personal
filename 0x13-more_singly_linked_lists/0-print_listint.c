#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to the head node of the list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i;
	listint_t *tmp;

	if (h == NULL)
		return (0);
	tmp = (listint_t *)h;
	for (i = 0; tmp->next != NULL; i++)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
	printf("%d\n", tmp->n);

	return (i + 1);
}
