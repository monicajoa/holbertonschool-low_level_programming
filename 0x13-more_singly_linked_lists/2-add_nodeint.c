#include "lists.h"
/**
 *add_nodeint - function that adds a new node at the beginning of a list
 *@head: pointer with the address of the pointer to the first node
 *@n: number or integer in the new node
 *
 * Return: address of the node created
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *m;

	m = malloc(sizeof(listint_t));
	if (m == '\0')
	{
		return (NULL);
	}
	m->n = n;
	m->next = *head;
	*head = m;
	return (m);
}
