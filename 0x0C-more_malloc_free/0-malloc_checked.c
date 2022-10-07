#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: param
 *
 * Return: void pointer
 */

void *malloc_checked(unsigned int b)
{
	if (b == 0)
		return (NULL);
	return (void *)malloc(b);
	if (malloc(b) == NULL)
		exit(98);
}
