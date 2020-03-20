#include "lists.h"
/**
 *add_node - function that adds a new node at the beginning of a list
 *@head: double pointer that point to another pointer of a list
 *@str: pointer with the address of a string
 *
 * Return: unsigned int with the numbers nodes
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *m;
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
	m->next = *head;
	*head = m;
	return (m);
}
