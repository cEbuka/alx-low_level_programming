#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: param
 *
 * Return: void pointer
 */

void *malloc_checked(unsigned int b)
{
	return (malloc(b));
	if (malloc(b) == NULL)
		exit(98);
}
