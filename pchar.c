#include "monty.h"

/**
 * print_character -  prints the char at the top of the stack
 * @stack: Pointer
 * @line_number: Int
 */
void print_character(stack_t **stack, unsigned int line_number)
{
	int x;

	if (stack == NULL || *stack == NULL)
		str_errors(11, line_number);

	x = (*stack)->n;
	if (x < 0 || x > 127)
		str_errors(10, line_number);
	printf("%c\n", x);
}
