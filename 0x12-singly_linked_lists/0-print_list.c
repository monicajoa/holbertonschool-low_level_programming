#include "lists.h"
/**
 *print_list - function that prints all the elements of a list
 *@h: pointer type list_t (structure) with the head of the list
 *
 * Return: unsigned int with the numbers printed
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != '\0')
	{
		if (h->str == '\0')
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		i++;
		h = h->next;
	}
	return (i);
}
