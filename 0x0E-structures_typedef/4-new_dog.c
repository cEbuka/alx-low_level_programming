#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int nlen, olen, i;


	nlen = 0;
	olen = 0;
	
	/*get length of name*/
	while (name[nlen++])
		;
	
	/*get length of owner*/
	while (owner[olen++])
		;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(nlen + 1);
	if (d->name == NULL)
		return (NULL);
	for (i = 0; i < nlen; i++)
		d->name[i] = name[i];

	dog->age = age;

	dog->owner = malloc(olen + 1);
	if (d->owner == NULL)
		return (NULL);
	for (i = 0; i < olen; i++)
		d->owner[i] = owner[i];

	return (dog);
}
