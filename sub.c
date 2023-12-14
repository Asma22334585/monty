#include "monty.h"
/**
 * s_top_t_e - subtracts the top element of the stack
 * from the second top element of the stack.
 * @stack: Pointer
 * @line_number: Int
 */
void s_top_t_e(stack_t **stack, unsigned int line_number)
{
	int s;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)

		other_errors(8, line_number, "sub");


	(*stack) = (*stack)->next;
	s = (*stack)->n - (*stack)->prev->n;
	(*stack)->n = s;
	free((*stack)->prev);
	(*stack)->prev = NULL;
}
