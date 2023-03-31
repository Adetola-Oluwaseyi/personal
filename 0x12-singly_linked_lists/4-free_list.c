#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to head node of the list
 */
void free_list(list_t *head)
{
	list_t *tmp, *had;

	if (head == NULL)
		return;
	tmp = head;
	while (tmp->next)
	{
		had = tmp;
		tmp = tmp->next;
		free(had->str);
		free(had);
	}
	free(tmp->str);
	free(tmp);
}
