#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: head of the linked list
 *@n: number to put in the new node
 *
 * Return: Address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *m;

	m = malloc(sizeof(dlistint_t));
	if (m == '\0')
	{
		return (NULL);
	}
	m->n = n;
	m->next = *head;
	m->prev = NULL;
	if (*head != NULL)
	{
		(*head)->prev = m;
	}
	*head = m;
	return (m);
}
