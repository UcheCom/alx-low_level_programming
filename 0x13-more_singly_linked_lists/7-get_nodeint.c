#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index in a linked list
 * @head: first node in the linked list
 * @index: index of the node to return
 *
 * Return: pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0;

	listint_t *temp = head;

	while (temp != NULL && counter < index)
	{
		temp = temp->next;
		counter++;
	}

	if (temp != NULL)
	{
		return (temp);
	}
	else
	{
		return (NULL);
	}
}
