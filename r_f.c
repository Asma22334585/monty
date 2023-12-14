#include "monty.h"
/**
 * r_f - reads the file
 * @file_desc: pointer
 * Return: void
 */

void r_f(FILE *file_desc)
{
	int l_n, format = 0;
	char *buffer = NULL;
	size_t length = 0;

	for (l_n = 1; getline(&buffer, &length, file_desc) != -1; l_n++)
	{
		format = line_by_line(buffer, l_n, format);
	}
	free(buffer);
}
