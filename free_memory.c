#include "monty.h"
/**
 * 
 * 
 */
void free_memory(stack_t *head)
{
     stack_t h;
     stack_t *tmp;

     while (head != NULL)
     {
          tmp = head->next;
          free(head);
          head = tmp;
     }
     
}