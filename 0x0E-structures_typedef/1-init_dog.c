#include "dog.h"
/**
 *init_dog - function that initialize a variable of type struct dog
 *@d: pointer that points to the struct called dog
 *@name:dog's name
 *@age:dog's age
 *@owner: dog'owner
 *
 * Return: Always 0 (Success)
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == '\0')
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
