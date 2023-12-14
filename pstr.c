#include "monty.h"
/**
 * print_string -  prints the string starting at the top of the stack
 * @stack: Pointer
 * @l_nmb: Int
 */
void print_string(stack_t **stack, __attribute__((unused))unsigned int l_nmb)
{
	int x;
	stack_t *tmp;

	if (stack == NULL || *stack == NULL)
	{
		printf("\n");
		return;
	}

	tmp = *stack;
	while (tmp != NULL)
	{
		x = tmp->n;
		if (x <= 0 || x > 127)
			break;
		printf("%c", x);
		tmp = tmp->next;
	}
	printf("\n");
}
