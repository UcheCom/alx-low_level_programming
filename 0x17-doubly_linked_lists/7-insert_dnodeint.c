#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given
 * position.
 *
 * @h: head of the list.
 * @idx: index of the new node.
 * @n: value of the new node.
 * Return: address of the new node or NULL on failure.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *nw_nd;
	dlistint_t *head;
	unsigned int x;

	nw_nd = NULL;
	if (idx == 0)
		nw_nd = add_dnodeint(h, n);
	else
	{
		head = *h;
		x = 1;
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev;
		while (head != NULL)
		{
			if (x == idx)
			{
				if (head->next == NULL)
					nw_nd = add_dnodeint_end(h, n);
				else
				{
					nw_nd = malloc(sizeof(dlistint_t));
					if (nw_nd != NULL)
					{
						nw_nd->n = n;
						nw_nd->next = head->next;
						nw_nd->prev = head;
						head->next->prev = nw_nd;
						head->next = nw_nd;
					}
				}
				break;
			}
			head = head->next;
			x++;
		}
	}
	return (nw_nd);
}
