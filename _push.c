#include "monty.h"
/**
 * push - push element in the top of stack
 *
 * @n: number value
 */

void _push(stack_t **stack, unsigned int line_number)
{
	stack_s *temp;
	
	int top = -1;

	if (!atoi(line_number))
	{
		printf("L%d: usage: push intege n\", line_number);
		exit(EXIT_FAILURE);
	}
}
