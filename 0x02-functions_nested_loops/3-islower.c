#include "main.h"
/**
 * _islower - checks if a char is loercase
 * @c: char to be checked
 *
 * Return: 1 if 'c' is lowercase
 * Return: 0 if otherwise
 */
int _islower(int c)
{
	int l; /* iterator for lowercase */

	for (l = 'a'; l <= 'z'; l++)
	{
		if (c == l)
		{
			return (1);
		}	
	}
	return (0);
}
