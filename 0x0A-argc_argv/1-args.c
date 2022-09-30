#include "main.h"

/**
 * main - prints number of @argv
 * @argc: number of @argv
 * @argv: arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	int i;
	int count;

	count = 0;
	for (i = 1; i < argc; i++)
	{
		count++;
	}
	printf("%d\n", count);
	exit(EXIT_SUCCESS);
}
