#include "monty.h"

/**
 * main - the root of the project
 * @argc: how many arguments were passed to a program
 * @argv: arguments vector
 *
 * Return: on scuccess, always EXIT_SUCCESS
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
	universal = &head;

	file_rd(argv[1], &head);

	atexit(free_all);

	exit(EXIT_SUCCESS);
}
