#include "main.h"

/**
 * isupper - checks for uppercase
 * @c: character
 *
 * Return: 1 if true or 0 if not
 */

int _isupper(int c)
{
	int l;

	l = 'A';
	for (; l <= 'Z'; l++)
		if (c == l)
			return (1);
	return (0);
}
