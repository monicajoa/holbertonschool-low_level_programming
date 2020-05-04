#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: head of the linked list
 *
 * Return: The number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	if (h == '\0')
	{
		return (0);
	}
	while (h != '\0')
	{
		h = h->next;
		i++;
	}
	return (i);
}
