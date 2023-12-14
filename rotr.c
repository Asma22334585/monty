#include "monty.h"
/**
 * rotr -  rotates the stack to the bottom
 * @stack: Pointer
 * @l_nmb: Int
 */
void rotr(stack_t **stack, __attribute__((unused))unsigned int l_nmb)
{
	stack_t *tmp;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
		return;

	tmp = *stack;

	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = *stack;
	tmp->prev->next = NULL;
	tmp->prev = NULL;
	(*stack)->prev = tmp;
	(*stack) = tmp;
}
