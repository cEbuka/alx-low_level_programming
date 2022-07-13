#include "main.h"
/**
 *_strlen -> return the length of a string
 *
 * @s : paramter as pointer
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;

	return (len);
}
