#include "lists.h"
/**
 *print_listint - function that prints all the elements of a list
 *@h: pointer type list_t (structure) with the head of the list
 *
 * Return: unsigned int with the numbers printed
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != '\0')
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
