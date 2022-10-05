#include "monty.h"

stack **lead;

/**
 * main - the root of the project
 * @argc: how many arguments were passed to a program
 * @argv: arguments vector
 *
 * Return: on success, always EXIT_SUCCESS
 */
int main(int argc, char *argv[])
{
	stack_t *head;

	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	head = NULL;
	lead = &head;

	read_file(argv[1], &head);

	exit(free_global);

	exit(EXIT_SUCCESS);
}
