#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * list_len - function for count a len
 * @h: pointer
 * Return: return count
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
			h = h->next;
	}
	return (count);

}
