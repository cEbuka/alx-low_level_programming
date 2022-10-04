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
	while (str[len])
		len++;
	/*check if str is null*/
	if (str == NULL)
		return (NULL);
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
	*(newStr + i) = '\0';
	/*return newStr*/
	return (newStr);
}
