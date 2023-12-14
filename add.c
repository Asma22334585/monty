#include "monty.h"
/**
 * a_top_t_e -  adds the top two elements of the stack.
 * @stack: Pointer
 * @line_number: Int
 */
void a_top_t_e(stack_t **stack, unsigned int line_number)
{
	int s;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
		other_errors(8, line_number, "add");

	(*stack) = (*stack)->next;
	s = (*stack)->n + (*stack)->prev->n;
	(*stack)->n = s;
	free((*stack)->prev);
	(*stack)->prev = NULL;
}
