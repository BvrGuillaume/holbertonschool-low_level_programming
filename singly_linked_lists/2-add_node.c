#include <stdlib.h>
#include <string.h>
#include "lists.h"
#include <string.h>

/**
 * add_node - add a new node at the begenning of a list_t list
 * @head: double pointer to the head of the list
 * @str: chain of characters to duplicate
 * Return: adress of the new node or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	size_t n;

		if (new_node == NULL)
		{
			return (NULL);
		}
		new_node->str = strdup(str);
		if (new_node->str == NULL)
		{
			free(new_node);
			return (NULL);
		}

		for (n = 0; str[n]; n++)
			;

		new_node->len = n;
		new_node->next = *head;
		*head = new_node;

		return (new_node);
}
