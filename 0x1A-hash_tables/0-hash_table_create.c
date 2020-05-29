#include "hash_tables.h"

/**
 * hash_table_create - Function that creates a hash table.
 * @size: Size of the array
 *
 * Return: Pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = NULL;

	new_table = malloc(size * sizeof(hash_table_t));
	if (new_table == NULL)
	{
		return (NULL);
	}
	else
	{
		return (new_table);
	}
}
