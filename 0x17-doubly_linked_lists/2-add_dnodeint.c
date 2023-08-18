#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of list.
 * @head: pointer to the head of the list.
 * @n: value of node
 *
 *Return: number of nodes.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nw_node;
	dlistint_t *h;

	nw_node = malloc(sizeof(dlistint_t));
	if (nw_node)
		return (NULL);

	nw_node->n = n;
	nw_node->prev = NULL;
	h = *head;
	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}
	nw_node->next = h;
	if (h != NULL)
		h->prev = nw_node;
	*head = nw_node;
	return (nw_node);
}
