#include "monty.h"
/**
 * find_function - find the appropriate function for the opcode
 * @opcode: opcode
 * @value: argument
 * @format:  storage format
 * @l_nmb: line number
 * Return: void
 */
void find_function(char *opcode, char *value, int l_nmb, int format)
{
	int y;
	int flag;

	instruction_t list_function[] = {
		{"push", push_e},
		{"pall", print_all_values},
		{"pint", top_of_stack},
		{"pop", rmv_top_of_stack},
		{"nop", nop},
		{"swap", sw_top_t_e},
		{"add", a_top_t_e},
		{"sub", s_top_t_e},
		{"div", div_e},
		{"mul", mul_e},
		{"mod", mod_e},
		{"pchar", print_character},
		{"pstr", print_string},
		{"rotl", rotl},
		{"rotr", rotr},
		{NULL, NULL}
	};

	if (opcode[0] == '#')
		return;

	for (flag = 1, y = 0; list_function[y].opcode != NULL; y++)
	{
		if (strcmp(opcode, list_function[y].opcode) == 0)
		{
			up_function(list_function[y].f, opcode, value, l_nmb, format);
			flag = 0;
		}
	}
	if (flag == 1)
		errors_msg(3, l_nmb, opcode);
}
