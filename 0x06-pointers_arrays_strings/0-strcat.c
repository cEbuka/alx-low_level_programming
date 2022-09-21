#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: @dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++);
	/* i now pointing to null character in dest */
	for (j = 0; src[j] != '\0'; j++)
		dest[i+j] = src[j];
	/* add null terminate */
	dest[i + j] = '\0';
	
	return (dest);
}
