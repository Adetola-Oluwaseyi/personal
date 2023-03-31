#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to pointer to the head node
 * @str: value of str member in the new node
 *
 * Return: address of the new element
 * NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = find_len(new->str);
	new->next = *head;

	*head = new;

	return (new);
}

/**
 * find_len - finds the length of a string
 * @str: pointer to the string
 *
 * Return: length of the string
 */
int find_len(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	return (i);
}

