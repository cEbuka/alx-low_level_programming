#include "main.h"

/**
 * _isdigit - checks for digits
 * @c: character
 *
 * Return: 1 if true or 0 if not
 */

int _isupper(int c)
{
	int i;

	i = '0';
	for (; i <= '9'; i++)
		if (c == i)
			return (1);
	return (0);
}
