#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of list.
 * @head: pointer to the head of the list.
 * @n: value of node
 *
 *Return: the address of the new node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nw_node;
	dlistint_t *h;

	nw_node = malloc(sizeof(dlistint_t));
		if (nw_node == NULL)
		return (NULL);

	nw_node->n = n;
	nw_node->next = NULL;
	h = *head;
	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = nw_node;
	}
	else
	{
		*head = nw_node;
	}
	nw_node->prev = h;
	return (nw_node);
}
