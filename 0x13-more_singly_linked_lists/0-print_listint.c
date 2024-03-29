#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: pointer to type listint_t to be printed.
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t x = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		x++;
		h = h->next;
	}
	return (x);
}
