#include "monty.h"

/**
 * execution  - parses commands from the line op
 * @stack: the pointer to the head of the stack
 * @op: the line instructions
 * @line_number: a number of the line
 *
 * Return: void
 */
void execution(void)
{
	int i;
	char *line = NULL;
	size_t length = 0;
	unsigned int line_number = 0;
	i
	instruction_t ops = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{"sub", sub},
		{"div", div},
		{"mul", mul},
		{"mod", mod},
		{"pchar", pchar},
		{"pstr", pstr},
		{"rotl", rotl},
		{"rotr", rotr},
		{NULL, NULL}
	};

	stack_t *stack = NULL;

	while (getline(&line, &length, untie.bty) != -1)
	{
		line_number++;

		untie.sign = strtok(line, " \n");
		if (untie.sign == NULL || untie.sign[0] == '#')
			continue;
		for (i = 0; ops[i].opcode != NULL; i++)
		{
			if (strcmp(ops[i].opcode, untie.sign) == 0)
			{
				untie.d = strtok(NULL, " \n");
				ops[i].f(&stack, line_number);
				break;
			}
		}
		if (ops[i].opcode == NULL)
		{
			printf(stderr, "L%d: unknown instruction %s\n", line_number, untie.sign);
			free_global(stack);
			exit(EXIT_FAILURE);
		}
	}
	free_global(stack);
}
