#include "monty.h"
/**
 * _nop - doesn’t do anything.
 * @stack: pointer to lists for monty stack
 * @line_number: number of line opcode occurs on
 */

void _nop(stack_t **stack, unsigned int line_number)
{
	UNUSED(line_number);
     UNUSED(stack);
}
