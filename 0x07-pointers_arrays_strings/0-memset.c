#include "main.h"

/**
 * _memset - fills memory with byte value @b
 * @s: pointer to memory
 * @b: byte value
 * @n: number of times filled
 *
 * Return: @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 1; i <= n; i++)
	{
		*s = b;
		s++;
	}
	return (s);
}
