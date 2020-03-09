#include "dog.h"
#include <stdio.h>
/**
 *print_dog - function that prints a struct dog
 *@d: pointer that points to the struct called dog
 *
 * Return: Always 0 (Success)
 */
void print_dog(struct dog *d)
{
	if (d == '\0')
		return;
	if (d->name == '\0')
		printf("Name: (nil)");
	if (d->owner == '\0')
		printf("Owner: (nil)");
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
