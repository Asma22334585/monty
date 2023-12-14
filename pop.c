#include "monty.h"
/**
 * rmv_top_of_stack - Adds a node to the stack.
 * @stack: Pointer
 * @line_number: Int
 */
void rmv_top_of_stack(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;

	if (!stack || !*stack)
		other_errors(7, line_number);

	tmp = *stack;
	*stack = tmp->next;
	if (*stack != NULL)
		(*stack)->prev = NULL;
	free(tmp);
}
