#include "monty.h"


/**
 * push_e - pushes an element to the stack.
 * @new_node: Pointer
 * @l_nmb: Int
 */
void push_e(stack_t **new_node, __attribute__((unused))unsigned int l_nmb)
{
	stack_t *tmp;

	if (new_node == NULL || *new_node == NULL)
		exit(EXIT_FAILURE);
	if (head == NULL)
	{
		head = *new_node;
		return;
	}
	tmp = head;
	head = *new_node;
	head->next = tmp;
	tmp->prev = head;
}

/**
 * print_all_v - prints all the values on the stack,
 * starting from the top of the stack.
 * @stack: Pointer
 * @l_nmb: line number
 */
void print_all_v(stack_t **stack, __attribute__((unused))unsigned int l_nmb)
{
	stack_t *tmp;

	if (stack == NULL)
		exit(EXIT_FAILURE);
	tmp = *stack;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}
