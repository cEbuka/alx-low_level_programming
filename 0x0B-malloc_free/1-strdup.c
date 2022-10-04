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
	unsigned int len;

	len = 1;
	i = 0;
	if (str == NULL)
		return (NULL);
	while (str[len])
		len++;
	/* allocate memory for newStr */
	newStr = malloc(sizeof(char) * len + 1);
	/* check if newStr is null */
	if (newStr == NULL)
		return (NULL);
	/* loop through str and assign to newStr */
	while (i < len)
	{
		*(newStr + i) = *(str + i);
		i++;
	}
	/*return newStr*/
	return (newStr);
}
