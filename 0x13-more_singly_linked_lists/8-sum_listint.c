#include "lists.h"
/**
 *sum_listint - returns the sum of all the data (n) of a linked list
 *@head: pointer with the first node
 *
 * Return: integer with the sum of all the data (n)
 */
int sum_listint(listint_t *head)
{
	listint_t *m;
	int sum = 0;

	m = head;
	if (head == NULL)
	{
		return (0);
	}
	while (m != NULL)
	{
		sum = sum + (m->n);
		m = m->next;
	}
	return (sum);
}
