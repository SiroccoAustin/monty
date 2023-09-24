#include "monty.h"

/**
* invalid_information - invalid information
* Return: void
*/

void invalid_information(void)
{
	dprintf(2, "L: unknown instruction %s\n", information->tokenized[0]);
	close_stream();
	free_token();
	free_args();
	exit(EXIT_FAILURE);
}
