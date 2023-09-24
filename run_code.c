#include "monty.h"
/**
* run_codes - run code
* Return: void
*/

void run_codes(void)
{
	stack_t *stack = NULL;
	if (information->num_tokens == 0)
		return;
	
	information->instruction->f(&stack, information->line_number);
}
