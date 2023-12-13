#include "monty.h"

/**
 * up_function - take the required function.
 * @func: Pointer
 * @op: string
 * @num_val: string
 * @l_nmb: line numeber
 * @format: Format specifier
 */
void call_fun(op_func func, char *op, char *num_val, int l_nmb, int format)
{
	stack_t *node;
	int flag;
	int y;

	flag = 1;
	if (strcmp(op, "push") == 0)
	{
		if (num_val != NULL && num_val[0] == '-')
		{
			num_val = num_val + 1;
			flag = -1;
		}
		if (num_val == NULL)
			err(5, l_nmb);
		for (y = 0; num_val[y] != '\0'; y++)
		{
			if (isdigit(num_val[y]) == 0)
				err(5, l_nmb);
		}
		node = create_node(atoi(num_val) * flag);
		if (format == 0)
			func(&node, l_nmb);
		if (format == 1)
			add_to_queue(&node, l_nmb);
	}
	else
		func(&head, l_nmb);
}
