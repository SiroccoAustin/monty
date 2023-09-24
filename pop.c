#include "monty.h"

/**
* pop - delete top node of the stack
* @stack - pointer of stack
* @line_number: line num
* Return: void
*/

void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	(void) *stack;
	if (information->head == NULL)
	{
		dprintf(2, "L%d: can't pop an empty stack", line_number);
		free(information->head);
		information->head = NULL;
		exit(EXIT_FAILURE);
	}	
	temp = information->head;
	information->head = temp->next;
	free(temp);
}
