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
<<<<<<< HEAD
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
=======

		if (cursor == NULL || *cursor == NULL)
		{

			printf("L%d: can't pint, stack empty\n", line_number);
			exit(EXIT_FAILURE);
		}
		else
		{
>>>>>>> dd00c92e7949ff78cd262fd018e9f49c3b3deb57
			printf("%d\n", cursor->n);
		}
	}
	}
}
