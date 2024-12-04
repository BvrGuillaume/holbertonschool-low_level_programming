#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len -  function that returns the elements in a linked dlistint_t
 * @h: pointer
 * Return: return count
 *
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
