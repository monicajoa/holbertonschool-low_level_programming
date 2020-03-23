#include "lists.h"
/**
 *free_listint - function that frees a list
 *@head: pointer with the first node
 *
 * Return: Always 0 (Success)
 */
void free_listint(listint_t *head)
{
	listint_t *aux;

	while (head != '\0')
	{
		aux = head;
		head = head->next;
		free(aux);
	}
}
