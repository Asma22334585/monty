#include "monty.h"

stack_t *head = NULL;

/**
 * main - entry point
 * @argc: arguments
 * @argv: list
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	o_f(argv[1]);
	f_nodes();
	return (0);
}

/**
 * f_nodes - Frees nodes at stack.
 */

void f_nodes(void)
{
	stack_t *tmp;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}

/**
 * c_node - Creates a node.
 * @n: int
 * Return: Upon sucess a pointer to the node. Otherwise NULL.
 */
stack_t *c_node(int n)
{
	stack_t *node;

	node = malloc(sizeof(stack_t));
	if (node == NULL)
		errors_msg(4);
	node->next = NULL;
	node->prev = NULL;
	node->n = n;
	return (node);
}

/**
 * a_q - Adds a node at  queue.
 * @new_node: Pointer
 * @l_nmb: line number
 */
void a_q(stack_t **new_node, __attribute__((unused))unsigned int l_nmb)
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
	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = *new_node;
	(*new_node)->prev = tmp;
}
