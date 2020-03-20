#include "lists.h"
/**
 *add_node_end - function that adds a new node at the end of a list
 *@head: double pointer that point to another pointer of a list
 *@str: pointer with the address of a string
 *
 * Return: unsigned int with the numbers nodes
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *m, *aux;
	unsigned int i;

	m = malloc(sizeof(list_t));
	if (m == '\0')
	{
		return (NULL);
	}
	m->str = strdup(str);
	if (m->str == '\0')
	{
		free(m);
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	m->len = i;
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
