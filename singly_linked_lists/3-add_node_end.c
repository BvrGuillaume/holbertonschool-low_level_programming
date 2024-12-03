#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
* add_node_end - add a new node at the end of the list_t list
* @head: pointer to a pointer at the beginning of the list
* @str: chain of characters to duplicate and to insert into the new node
* Return: adress of new element or NULL
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	char *dup_str;

	size_t len = 0;

	if (str == NULL)
		return (NULL);

	dup_str = strdup(str);
	if (dup_str == NULL)
		return (NULL);

	while (str[len])
		len++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(dup_str);
		return (NULL);
	}

	new_node->str = dup_str;
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = new_node;
	}

	return (new_node);
}
