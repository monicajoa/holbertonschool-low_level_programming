#include "lists.h"
/**
 *get_nodeint_at_index - returns the nth node of a linked list.
 *@head: pointer with the first node
 *@index: is the index of the node starting at 0.
 *
 * Return: address the pointer with the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *m;
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
	if (m == NULL)
	{
		return (NULL);
	}
	return (m);
}
