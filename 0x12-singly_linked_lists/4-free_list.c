#include "lists.h"
/**
 *free_list - function that frees a list.
 *@head: pointer type list_t (structure) with the head of the list
 *
 * Return: Always 0 (Success)
 */
void free_list(list_t *head)
{
	list_t *aux;

	while (head != '\0')
	{
		aux = head;
		head = head->next;
		free(aux->str);
		free(aux);
	}
}
