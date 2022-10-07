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
		exit(EXIT_FAILURE);
	return (malloc(b));
	if (malloc(b) == NULL)
		exit(98);
}
