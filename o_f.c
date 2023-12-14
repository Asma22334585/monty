#include "monty.h"

/**
 * o_f - opens a file
 * @name_of_file: the file name
 * Return: void
 */

void o_f(char *name_of_file)
{
	FILE *file_desc = fopen(name_of_file, "r");

	if (!name_of_file || !file_desc)
		errors_msg(2, name_of_file);

	r_f(file_desc);
	fclose(file_desc);
}
