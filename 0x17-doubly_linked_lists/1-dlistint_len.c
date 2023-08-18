#include "lists.h"

/**
 * dlistint_len - returns the number of elements of the list
 * @h: pointer to the head of the list.
 *
 *Return: number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int counter;

	counter = 0;

	if (!h)
		return (counter);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
