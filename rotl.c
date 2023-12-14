#include "monty.h"

/**
 * rotl -  rotates the stack to the top.
 * @stack: Pointer
 * @l_nmb: Int
 */
void rotl(stack_t **stack, __attribute__((unused))unsigned int l_nmb)
{
	stack_t *tmp;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
		return;

	tmp = *stack;
	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = *stack;
	(*stack)->prev = tmp;
	*stack = (*stack)->next;
	(*stack)->prev->next = NULL;
	(*stack)->prev = NULL;
}
