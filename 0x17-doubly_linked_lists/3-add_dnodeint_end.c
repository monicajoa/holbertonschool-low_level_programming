#include "lists.h"
/**
 *add_dnodeint_end - function that adds a new node at the end of a list
 *@head: Pointer with the address of the pointer to the first node
 *@n: number or integer in the new node
 *
 * Return: adress of the node created or null if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *m, *aux;

	m = malloc(sizeof(dlistint_t));
	if (m == '\0')
	{
		return (NULL);
	}
	m->n = n;
	if (*head != NULL)
	{
		aux = *head;
		while (aux->next != NULL)
		{
			aux = aux->next;
		}
		m->prev = aux;
		aux->next = m;
		m->next = NULL;
	}
	else
	{
		*head = m;
		m->next = NULL;
		m->prev = NULL;
	}
	return (m);
}
