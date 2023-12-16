#include "monty.h"
/**
 * line_by_line - Separates each line into token
 * @buffer: line from the file
 * @line_number: int
 * @format: storage format
 * Return: Returns 0 if stack, 1 if queue
 */

int line_by_line(char *buffer, int line_number, int format)
{
	char *opcode, *x;
	const char *delim = "\n ";

	if (!buffer)
		errors_msg(4);

	opcode = strtok(buffer, delim);
	if (!opcode)
		return (format);
	x = strtok(NULL, delim);

	if (strcmp(opcode, "stack") == 0)
		return (0);
	if (strcmp(opcode, "queue") == 0)
		return (1);

	find_function(opcode, x, line_number, format);
	return (format);
}
