#include "lists.h"
/**
 *insert_dnodeint_at_index - inserts a new node at a given position
 *@h: address of the var pointing to a head
 *@idx: index of the list where the new node should be added
 *@n: data
 *
 * Return: the address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *m, *aux;
	unsigned int i;

	if (idx == 0)
	{
		m = malloc(sizeof(dlistint_t));
		if (m == '\0')
		{
			return (NULL);
		}
		m->n = n;
		m->next = *h;
		*h = m;
		return (m);
	}
	aux = *h;
	i = 1;
	while (aux != NULL)
	{
		if (i == idx)
		{
			m = malloc(sizeof(dlistint_t));
			if (m == NULL)
			{
				return (NULL);
			}
			m->n = n;
			m->next = aux->next;
			aux->next = m;
			return (m);
		}
		aux = aux->next;
		i++;
	}
	return (NULL);
}
