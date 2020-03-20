#include "lists.h"
/**
 *list_len- function that returns the number of elements in a linked list
 *@h: pointer type list_t (structure) with the head of the list
 *
 * Return: unsigned int with the numbers printed
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != '\0')
	{
		i++;
		h = h->next;
	}
	return (i);
}
