#include "monty.h"
/**
 * _push - push int to a stack
 * @stack: linked lists for monty stack
 * @line_number: number of line opcode occurs on
 */
void _push(toy_stack_t **head_stack, __attribute__ ((unused))unsigned int line_number)
{
	toy_stack_t *new_node;
	(void)line_number;

	new_node = malloc(sizeof(toy_stack_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new_node->n = var_global.push_arg;
	new_node->next = *head_stack;
	new_node->prev = NULL;
	if (*head_stack != NULL)
		(*head_stack)->prev = new_node;
	*head_stack = new_node;
}
