#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: head of the linked list
 *
 * Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	if (h == '\0')
	{
		return (0);
	}
	while (h != '\0')
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
