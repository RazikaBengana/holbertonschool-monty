#include "monty.h"
/**
 * _pint - prints the value at the top of the stack
 * @head_stack: pointer to node
 * @line_number:number of line option code
 */
void _pint(stack_t **head_stack, unsigned int line_number)
{
	int index = 0;
	stack_t *cursor;

	cursor = *head_stack;

	UNUSED(line_number);
	while (cursor)
	{
		if (cursor != NULL)
		{
			printf("%d\n", cursor->n);
		}
		else
		{
			printf("L%d: can't pint, stack empty\n", cursor->n);
			exit(EXIT_FAILURE);
		}
		index++;
		cursor = cursor->next;
	}
}
