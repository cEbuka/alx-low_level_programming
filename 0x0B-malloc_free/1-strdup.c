#include "main.h"

/**
 * _strdup - duplicates a string
 * @str: string to be duplicated
 *
 * Return: pointer to duplicate
 */

char *_strdup(char *str)
{
	char *newStr;
	unsigned int i;

	i = 0;
	if (str == NULL)
		return (NULL);
	newStr = malloc(sizeof(str));
	if (newStr == NULL)
		return (NULL);
	while (i < sizeof(str))
	{
		*(newStr + i) = *(str + i);
		i++;
	}
	return (newStr);
}
