#include "lists.h"
/**
 *delete_nodeint_at_index - that deletes the node at index index of
 *@head: pointer with the address of the pointer to the first node
 *@index: index of the node that should be deleted
 *
 * Return: address of the node created
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *aux_1, *aux_2;
	unsigned int i = 1;

	aux_1 = *head;
	while (aux_1 != '\0')
	{
		if (index == 0)
		{
			aux_2 = *head;
			*head = aux_2->next;
			free(aux_2);
			return (1);
		}
		else if (i == index)
		{
			aux_2 = aux_1->next;
			aux_1->next = aux_2->next;
			free(aux_2);
			return (1);
		}
		aux_1 = aux_1->next;
		i++;
	}
	return (-1);
}
