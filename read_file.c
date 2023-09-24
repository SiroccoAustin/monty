#include "monty.h"

/**
* failed_stream - fail to read
* @filename: name of the file
* Return: void
*/

void failed_stream(char *filename)
{
	dprintf(stderr, "Error: Can't open file\n", filename);
	free_args();
	exit(EXIT_FAILURE);
}

/**
* read_stream - read file
* @filename: name of file
* Return: void
*/

void read_stream(char *filename)
{
	int fd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		failure_stream(filename);
	information->stream = fdopen(fd, "r");
	if (information->stream == NULL)
	{
		close(fd);
		failure_stream(filename);
	}
		
}
