#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: 0 if equal, 1 is greater and 2 if less than
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		int s1_int = s1[i] + '0'; /* convert char to int */
		int s2_int = s2[i] + '0'; /* convert char to int */

		if (s1_int == s2_int)
			return (0);
		else
			return (s1_int - s2_int);
	}
	return (1);
}
