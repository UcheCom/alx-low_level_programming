#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *far = head;
	listint_t *near = head;

	if (!head)
	return (NULL);

	while (far && near && near->next)
	{
	near = near->next->next;
	far = far->next;

	if (near == far)
	{
	far = head;
	while (far != fast)
	{
	far = far->next;
	near = near->next;
	}
	return (near);
	}
	}
	return (NULL);
}
