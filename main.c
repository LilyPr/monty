#include "monty.h"

/**
 * main - the root of the project
 * @argc: how many arguments were passed to a program
 * @argv: arguments vector
 *
 * Return: on success, always EXIT_SUCCESS
 */

global_t untie;

int main(int argc, char const *argv[])
{
	if (argc != 2)
	{
		printf(stderr, "USAGE: monty file\n");
		return (EXIT_FAILURE);
	}
	untie.mode = STACK;

	untie.bty = fopen(argv[1], "r");
	if (untie.bty == NULL)
	{
		printf(stderr, "Error: Can't open file %s\n", argv[1]);
		return (EXIT_FAILURE);
	}
	execute_script();
	return (0);
}
