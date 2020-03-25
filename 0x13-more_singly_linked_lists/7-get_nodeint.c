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
	unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	while (i < index)
	{
		head = head->next;
		i++;
	}
	if (head == NULL)
	{
		return (NULL);
	}
	return (head);
}
