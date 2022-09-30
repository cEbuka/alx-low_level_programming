#include "main.h"

/**
 * main - adds positive numbers
 * @argc: length of @argv
 * @argv: args
 *
 * Return: 0 if successful else -1
 */

int main(int argc, char *argv[])
{
	int i, result;

	result = 0;
	i = 1;
	if (argc > 1)
	{
		while(i < argc)
		{
			if (!atoi(argv[i]))
			{
				printf("%s\n", "Error");
				exit(EXIT_FAILURE);
			}
			result += atoi(argv[i]);
					i++;
		}
		printf("%d\n", result);
	}
	else
		printf("%d\n", 0);
	exit(EXIT_SUCCESS);
}
