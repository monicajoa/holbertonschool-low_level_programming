#include "lists.h"
/**
 *add_nodeint_end - function that adds a new node at the end of a list
 *@head: Pointer with the address of the pointer to the first node
 *@n: number or integer in the new node
 *
 * Return: adress of the node created
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *m, *aux;

	m = malloc(sizeof(listint_t));
	if (m == '\0')
	{
		return (NULL);
	}
	m->n = n;
	m->next = NULL;
	if (*head == NULL)
	{
		*head = m;
	}
	else
	{
		aux = *head;
		while (aux->next != '\0')
		{
			aux = aux->next;
		}
		aux->next = m;
	}
	return (m);
}
