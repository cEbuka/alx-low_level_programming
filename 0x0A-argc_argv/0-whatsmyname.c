#include "main.h"

/**
 * main - prints argv[0]
 * @argc: @argv length
 * @argv: arguments
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	if (argc > 0)
		printf("%s\n", *argv);
	return (0);
}
