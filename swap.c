#include "monty.h"

/**
* swap - swap nodes at the top of the stack
* @stack: pointer of linked list
* @line_number: num of lines
* Return: void
*/

void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *top;
	stack_t *secondtop;
	stack_t *tmp = information->head;
	int length = 0;

	(void) *stack;
	while (tmp != NULL)
	{
		length++;
		tmp = tmp->next;
	}
	if (length < 2)
	{
		dprintf(2, "L%: can't swap, stack too short", line_number);
		free(information->head);
		exit(EXIT_FAILURE);
	}

	top = information->head;
	secondtop = top->next;

	if (secondtop->next != NULL)
	{
		secondtop->next->prev = top;
	}
	top->prev = secondtop;
	top->next = secondtop->next;
	secondtop->prev = NULL;
	secondtop->next = top;

	information->head = secondtop;
}
