#include "lists.h"
/**
 *listint_len- function that returns the number of elements in a linked list
 *@h: pointer type listint_t (structure) with the head of the list
 *
 * Return: unsigned int with the numbers printed
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != '\0')
	{
		i++;
		h = h->next;
	}
	return (i);
}
