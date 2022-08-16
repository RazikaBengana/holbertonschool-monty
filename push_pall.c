include "monty.h"

/**
 * push -  pushes an element to the stack.
 * 
 * @data 
 */

void Push(int n)
{  
    stack_s *temp; 
    stack_s *top; 
  
	top = NULL;
    //Trường hợp không cấp phát được bộ nhớ cho temp
    if (!atoi(n)) 
    {  
	   printf("L<line_number>: usage: push integer");  
	   exit(EXIT_FAILURE);  
    }  
  
    //Thêm temp vào đỉnh Stack, cập nhập lại biến top
    temp->n = n;  
}
