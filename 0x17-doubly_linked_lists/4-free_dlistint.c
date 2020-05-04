#include "lists.h"
/**
 *free_dlistint - function that frees a list
 *@head: pointer with the first node
 *
 * Return: Always 0 (Success)
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux, *tmp;

	if (head == '\0')
	{
		return (NULL);
	}
	aux = head->next;
	while (aux != '\0')
	{
		tmp = aux->next;
		free(aux);
		aux = tmp;
	}
	free(head);
}
