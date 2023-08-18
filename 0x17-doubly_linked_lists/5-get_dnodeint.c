#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of the list.
 * @head: pointer to the head of the list
 * @index: index to search for, from 0.
 *
 *Return: the nth node or NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int len;
	dlistint_t *temp;

	len = 0;
	if (head == NULL)
	return (NULL);

	temp = head;
	while (temp)
	{
	if (index == len)
	return (temp);
	len++;
	temp = temp->next;
	}
	return (NULL);
}
