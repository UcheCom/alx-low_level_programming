#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * list_len - list the number of elements
 * @h: pointer to the list_t
 *
 * Return: the number of elements.
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
