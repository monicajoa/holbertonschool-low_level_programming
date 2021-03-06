#include "dog.h"
#include <stdlib.h>
/**
 *_strdup -  returns a pointer to a newly allocated space in memory
 *@str: duplicate of the string
 *
 * Return: Always 0 (Success)
 */
char *_strdup(char *str)
{

	int i;
	int a;
	char *m;

	if (str == '\0')
	{
		return ('\0');
	}
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	m = malloc((i * sizeof(char)) + 1);
	if (m == '\0')
	{
		return ('\0');
	}
	for (a = 0; a <= i; a++)
	{
		m[a] = str[a];
	}
	return (m);
}
/**
 *new_dog - function that creates a new dog.
 *@name:dog's name
 *@age:dog's age
 *@owner: dog'owner
 *
 * Return: Always 0 (Success)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *m;

	m = malloc(sizeof(dog_t));
	if (m == '\0')
		return ('\0');
	m->name = _strdup(name);
	if (m->name == '\0')
	{
		free(m);
		return ('\0');
	}
	m->age = age;
	m->owner = _strdup(owner);
	if (m->owner == '\0')
	{
		free(m->name);
		free(m);
		return ('\0');
	}
	return (m);
}
