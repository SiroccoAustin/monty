#include "monty.h"

/**
* execute - choose file to execute
* Return: void
*/

void execute(void)
{
	instruction_t arr[] = {
		{"push", &push},
		{"pall", &pall},
		{"pint", &pint},
		{"pop", &pop},
		{"swap", &swap},
		{"add", &add},
		{NULL, NULL}
	};
	int i = 0;

	while (arr[i].opcode)
	{
		if (strcmp(arr[i].opcode, information->tokenized[0]) == 0)
		{
			information->instruction->opcode = arr[i].opcode;
			information->instruction->f = arr[i].f;
			break;
		}
		i++;
	}
	invalid_information();
}
