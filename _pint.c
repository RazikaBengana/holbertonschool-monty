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
	printf("curesor/%d\n", cursor->n);
	UNUSED(line_number);
	if (cursor == NULL)
	{
		printf("hello");
			exit(EXIT_FAILURE);
	}
	else
	{
	while (cursor)
	{
		printf("hello\n");
		if (cursor != NULL)
		{
			printf("%d\n", cursor->n);
		}
		index++;
		cursor = cursor->next;	
	}
	}
}
