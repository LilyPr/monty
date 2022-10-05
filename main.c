#include "monty.h"

/* global struct to hold flag for queue and stack length */
universal_t universal;;

/**
 * main - Monty bytecode interpreter
 * @argc: number of arguments passed
 * @argv: array of argument strings
 *
 * Return: EXIT_SUCCESS on success or EXIT_FAILURE on failure
 */
int main(int argc, char *argv[])
{
	stack_t *stack = NULL;
	unsigned int line_number = 0;
	FILE *bk = NULL;
	char *line = NULL, *op = NULL;
	size_t n = 0;

	universal.queue = 0;
	universal.length = 0;
	if (argc != 2)
	{
		dprintf(STDOUT_FILENO, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	bk = fopen(argv[1], "r");
	if (bk == NULL)
	{
		dprintf(STDOUT_FILENO, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	atexit(free_line, &line);
	atexit(free_stack, &stack);
	atexit(close_file, bk);
	while (getline(&line, &n, bk) != -1)
	{
		line_number++;
		op = strtok(line, "\n\t\r ");
		if (op != NULL && op[0] != '#')
		{
			exec_op(op, &stack, line_number);
		}
	}
	exit(EXIT_SUCCESS);
}
