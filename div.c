#include "monty.h"
/**
 * div_e - divides the second top element of the stack
 * by the top element of the stack.
 * @stack: Pointer
 * @line_number: Int
 */
void div_e(stack_t **stack, unsigned int line_number)
{
	int d;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
		other_errors(8, line_number, "div");

	if ((*stack)->n == 0)
		other_errors(9, line_number);
	(*stack) = (*stack)->next;
	d = (*stack)->n / (*stack)->prev->n;
	(*stack)->n = d;
	free((*stack)->prev);
	(*stack)->prev = NULL;
}
