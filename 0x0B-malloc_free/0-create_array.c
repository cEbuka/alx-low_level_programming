#include "main.h"

/**
 * create_array - creates an array of @size and initialises it with @c
 * @size: size of array
 * @c: char in array
 *
 * Return: array containing @c
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size == 0)
		return (NULL);
	a = malloc(size * sizeof(c));
	for (i = 0; i < size; i++)
		*(a + i) = c;
	if (a == 0)
		return (NULL);
	return (a);
}
