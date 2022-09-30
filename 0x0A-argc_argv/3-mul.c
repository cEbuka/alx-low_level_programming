#include "main.h"

/**
 * main - multiplies two numbers
 * @argc: length of argv
 * @argv: operands
 *
 * Return: 0 if successfull else -1
 */

int main(int argc, char *argv[])
{
	int first, second, result;

	first = 0;
	second = 0;
	result = 0;
	if (argc == 3)
	{
		first = atoi(argv[1]);
		second = atoi(argv[2]);
		printf("%d\n", result = first * second);
	}
	else
	{
		printf("%s\n", "Error");
		exit(EXIT_FAILURE);
	}
	exit(EXIT_SUCCESS);
}
