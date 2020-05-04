#include "lists.h"
/**
 *get_dnodeint_at_index - returns the nth node of a linked list.
 *@head: pointer with the first node
 *@index: is the index of the node starting at 0.
 *
 * Return: address the pointer with the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *m;
	unsigned int i = 0;

	m = head;
	if (head == NULL)
	{
		return (NULL);
	}
	while (m != NULL)
	{
		if (i == index)
		{
			return (m);
		}
		m = m->next;
		i++;
	}
	return (NULL);
}
