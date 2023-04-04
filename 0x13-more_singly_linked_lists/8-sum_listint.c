#include "lists.h"

/**
 * sum_listint -  returns the sum of all the
 * data (n) of a listint_t linked list
 * @head: pointer to the head node of the list
 *
 * Return: sum of all data of the list
 * 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int num;
	listint_t *tmp;

	if (head == NULL)
		return (0);

	tmp = head;
	num = tmp->n;
	while (tmp->next)
	{
		tmp = tmp->next;
		num += tmp->n;
	}
	return (num);
}

