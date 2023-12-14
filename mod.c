#include "monty.h"
/**
 * mod_e - computes the rest of the division of the second
 * top element of the stack by the top element of the stack.
 * @stack: Pointer
 * @line_number: Int
 */
void mod_e(stack_t **stack, unsigned int line_number)
{
	int mo;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)

		other_errors(8, line_number, "mod");


	if ((*stack)->n == 0)
		other_errors(9, line_number);
	(*stack) = (*stack)->next;
	mo = (*stack)->n % (*stack)->prev->n;
	(*stack)->n = mo;
	free((*stack)->prev);
	(*stack)->prev = NULL;
}
