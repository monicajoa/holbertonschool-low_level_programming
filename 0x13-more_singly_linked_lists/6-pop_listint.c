#include "lists.h"
/**
 *pop_listint - deletes the head node of a linked list, retuns head node's
 *@head: pointer with the first node
 *
 * Return: the head nodes data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *aux_1, *aux_2;
	int i;

	if (head == '\0')
	{
		return (0);
	}
	aux_1 = *head;
	aux_2 = *head;
	aux_1 = aux_1->next;
	*head = aux_1;
	i = aux_2->n;
	free(aux_2);
	return (i);
}
