#include "lists.h"

/**
 * add_node_end - adds a new node at the beginning of a list_t list
 * @head: A pointer to the head of the list_t list
 * @str: value of str member in the new node
 *
 * Return:  address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
        list_t *ten;
        list_t *tmp;
        int i;

        if (str == NULL)
                return (NULL);

        if (*head != NULL)
        {
            tmp = *head;
            while (tmp != NULL)
                tmp = (*tmp).next;
        }
        
        ten = malloc(sizeof(list_t));
        if (ten == NULL)
                return (NULL);

        ten->str = strdup(str);
        for (i = 0; str[i]; i++)
        {
        }
        ten->len = i;
        ten->next = NULL;

        if (*head == NULL)
        {
            *head = ten;
        }
        return (ten);
}

