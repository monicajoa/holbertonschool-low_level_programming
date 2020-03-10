#include "dog.h"
#include <stdlib.h>
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
	m->name = name;
	m->age = age;
	m->owner = owner;
	return (m);
}
