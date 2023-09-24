#include "monty.h"

/**
* pall - print all nodes
* @stack: pointer of linked list
* @line_number: line num
* Return: void
*/

void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current;

	if (information->head == NULL)
	{
		return;
	}

	(void) line_number;
	(void) *stack;

	current = information->head;
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
