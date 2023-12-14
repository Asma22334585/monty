#include "monty.h"

/**
 * mul_e - multiplies the second top element of the stack
 * with the top element of the stack.
 * @stack: Pointer
 * @line_number: Int
 */
void mul_e(stack_t **stack, unsigned int line_number)
{
	int m;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
		other_errors(8, line_number, "mul");

	(*stack) = (*stack)->next;
	m = (*stack)->n * (*stack)->prev->n;
	(*stack)->n = m;
	free((*stack)->prev);
	(*stack)->prev = NULL;
}
