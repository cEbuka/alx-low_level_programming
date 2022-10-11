#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints struct dog
 * @d: struct dog
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL && d->owner == NULL)
			printf("Name: %p\nAge: %f\nOwner: %p\n", d->name, d->age, d->owner);
		else if (d->name == NULL)
			printf("Name: %p\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
		else if (d->owner == NULL)
			printf("Name: %s\nAge: %f\nOwner: %p\n", d->name, d->age, d->owner);
		else
			printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}
