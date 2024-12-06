#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
* get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
* @head: pointer to the head of the list
* @index: Index of the node to retrieve
* Return: Pointer to the nth node or NULL
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int current_index = 0;

	dlistint_t *current_node = head;

	while (current_node != NULL)
	{
		if (current_index == index)
			return (current_node);
		current_node = current_node->next;
		current_index++;
	}

	return (NULL);
}
