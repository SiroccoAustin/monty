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
        	fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
        	fclose(information->stream);
        	free_args();
        	exit(EXIT_FAILURE);
	}	
	temp = information->head;
	information->head = temp->next;
	free(temp);
}
