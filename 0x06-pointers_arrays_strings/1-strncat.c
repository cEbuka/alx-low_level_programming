#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: number of byte
 *
 * Return: @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	/* i now pointing to null character in dest */
	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[i + j] = src[j];
	/* add null terminate */
	dest[i + j] = '\0';

	return (dest);
}
