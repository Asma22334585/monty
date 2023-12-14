#include "monty.h"
/**
 * r_f - reads the file
 * @file_desc: pointer
 * Return: void
 */

void r_f(FILE *file_desc)
{
	int line_number, format = 0;
	char *buffer = NULL;
	size_t length = 0;

	for (line_number = 1; getline(&buffer, &length, file_desc) != -1; line_number++)
	{
		format = line_by_line(buffer, line_number, format);
	}
	free(buffer);
}
