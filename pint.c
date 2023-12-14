#include "monty.h"
/**
 * top_of_stack - prints the value at the top of the stack
 * @stack: Pointer
 * @line_number: Int
 */
void top_of_stack(stack_t **stack, unsigned int line_number)
{
	if (stack == NULL || *stack == NULL)
		other_errors(6, line_number);
	printf("%d\n", (*stack)->n);
}
