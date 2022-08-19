#include "monty.h"
/**
 * free_memory - free memory
 * @head: top stack
 */
void free_memory(stack_t *head)
{
	stack_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
