#include "monty.h"

/**
* pint - print first node in a stack
* @stack: pointer of linked list
* @line_number: line num
* Return: void
*/

void pint(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	(void) line_number;
	if (information->head == NULL)
	{
		dprintf(2, "L%d: can't pint, stack empty", line_number);
		free(information->head);
		information->head = NULL;
		exit(EXIT_FAILURE);
	}
	printf("%d\n", information->head->n);
}
