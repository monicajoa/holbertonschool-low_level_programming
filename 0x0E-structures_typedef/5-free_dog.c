#include "dog.h"
/**
 *free_dog - function that frees dogs.
 *@d: pointer with the structure for dogs
 *
 * Return: Always 0 (Success)
 */
void free_dog(dog_t *d)
{
	if (d == '\0')
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
