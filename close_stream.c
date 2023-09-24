#include "monty.h"
/**
* close_stream - close file
* Return: void
*/

void close_stream(void)
{
	if (information->stream == NULL)
		return;

	fclose(information->stream);
	information->stream = NULL;
}
