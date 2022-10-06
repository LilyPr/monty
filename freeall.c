#include "monty.h"

/**
 * free_all - frees all memory allocated in the program
 *
 * Return: void
 */

void free_all(void)
{
	stack_t *let_go;
	stack_t *tmp = NULL;

	let_go = *universal;

	while (let_go)
	{
		tmp = let_go->next;

		free(let_go);

		let_go = tmp;
	}
}
