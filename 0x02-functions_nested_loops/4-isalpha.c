#include "main.h"
/**
 * _isalpha - Checks if character is an alphabet
 * @c: char to be checked
 *
 * Return: 1 if @c is a letter else 0
 */
int _isalpha(int c)
{
	int upper;
	int lower;

	upper = 'A';
	lower = 'a';
	while (upper <= 'Z' || lower <= 'z')
	{
		if (c == upper || c == lower)
			return (1);
		upper++;
		lower++;
	}
	return (0);
}
