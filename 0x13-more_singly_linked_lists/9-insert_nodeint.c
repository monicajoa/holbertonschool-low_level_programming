#include "lists.h"
/**
 *insert_nodeint_at_index - inserts a new node at a given position
 *@head: address of the var pointing to a head
 *@idx: index of the list where the new node should be added
 *@n: data
 *
 * Return: integer with the sum of all the data (n)
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *m, *aux;
	unsigned int i;

	if (idx == 0)
	{
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
	aux = *head;
	i = 1;
	while (aux != NULL)
	{
		if (i == idx)
		{
			m = malloc(sizeof(listint_t));
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
