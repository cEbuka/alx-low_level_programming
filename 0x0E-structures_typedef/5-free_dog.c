#include "dog.h"

/**
 * free_dog - frees memory
 * @d: dog struct
 */

void free_dog(dog_t *d)
{
	free(d);
}
