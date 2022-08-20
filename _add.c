#include "monty.h"
/**
 * _add - adds the top two elements of the stack.
 * @stack: pointer to head de stack
 * @line_number:number of line option code
 */
void _add(stack_t **stack, unsigned int line_number)
{
	int a;
	int b;
	int result;
	stack_t *current;
	unsigned int n; /* counter for number of elements */

	current = *stack;
	n = 0;
	while (current != NULL)
	{
		current = current->next;
		n++;
	}

	if (n < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	else
	{
		a = (*stack)->n;
		b = (*stack)->next->n;

		result = a + b;

		pop(stack, line_number);

		(*stack)->n = result;
	}
}
