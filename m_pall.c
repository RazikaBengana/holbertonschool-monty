#include "monty.h"
/**
 * _pall - Function to display the status of stack
 * @head_stack: pointer to node
 * @line_number:number of line option code
 * Return: index nombre node
 */
void _pall(stack_t **head_stack, unsigned int line_number)
{
	int index = 0;
	stack_t *cursor;

	void(line_number);
	while (head_stack)
	{
		if (head_stack != NULL)
		printf("%d\n", head_stack->n);
		index++;
		head_stack = head_stack->next;
	}
}
