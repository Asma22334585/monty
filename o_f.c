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
		err(2, name_of_file);

	read_file(file_desc);
	fclose(file_desc);
}
