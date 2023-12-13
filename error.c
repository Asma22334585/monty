#include "monty.h"
/**
 * errors_msg - Prints appropiate error messages determined by their error code.
 * @e_m: The message error:
 * (1) => If the user does not give any file or more than one argument.
 * (2) => If, for any reason, it’s not possible to open the file.
 * (3) => If the file contains an invalid instruction.
 * (4) => If you can’t malloc anymore.
 * (5) => if is not an integer given to push
 * (6) => if the stack it empty for pint.
 * (7) => if the stack it empty for pop.
 * (8) => If the stack contains less than two elements.
 */
void errors_msg(int e_m, ...)
{
	va_list argment;
	char *o;
	int line_n;

	va_start(argment, e_m);
	switch (e_m)
	{
		case 1:
			fprintf(stderr, "USAGE: monty file\n");
			break;
		case 2:
			fprintf(stderr, "Error: Can't open file %s\n",
				va_arg(argment, char *));
			break;
		case 3:
			line_n = va_arg(argment, int);
			o = va_arg(argment, char *);
			fprintf(stderr, "L%d: unknown instruction %s\n", line_n, o);
			break;
		case 4:
			fprintf(stderr, "Error: malloc failed\n");
			break;
		case 5:
			fprintf(stderr, "L%d: usage: push integer\n", va_arg(argment, int));
			break;
		default:
			break;
	}
	free_nodes();
	exit(EXIT_FAILURE);
}
/**
 * other_errors - manipulate errors.
 * @e_m: The message error:
 * (6) => if the stack it empty for pint.
 * (7) => if the stack it empty for pop.
 * (8) => If the stack contains less than two elements.
 * (9) => Division by zero.
 */
void other_errors(int e_m, ...)
{
	va_list argment;
	char *o;
	int line_n;

	va_start(argment, e_m);
	switch (e_m)
	{
		case 6:
			fprintf(stderr, "L%d: can't pint, stack empty\n",
				va_arg(argment, int));
			break;
		case 7:
			fprintf(stderr, "L%d: can't pop an empty stack\n",
				va_arg(argment, int));
			break;
		case 8:
			line_n = va_arg(argment, unsigned int);
			o = va_arg(argment, char *);
			fprintf(stderr, "L%d: can't %s, stack too short\n", line_n, o);
			break;
		case 9:
			fprintf(stderr, "L%d: division by zero\n",
				va_arg(argment, unsigned int));
			break;
		default:
			break;
	}
	free_nodes();
	exit(EXIT_FAILURE);
}

/**
 * str_errors - manipulate errors.
 * @e_m: The message error:
 * (10) ~> The number different to  ASCII
 * (11) ~> The stack is empty.
 */
void str_errors(int e_m, ...)
{
	va_list argment;
	int line_n;

	va_start(argment, e_m);
	line_n = va_arg(argment, int);
	switch (e_m)
	{
		case 10:
			fprintf(stderr, "L%d: can't pchar, value out of range\n", line_n);
			break;
		case 11:
			fprintf(stderr, "L%d: can't pchar, stack empty\n", line_n);
			break;
		default:
			break;
	}
	free_nodes();
	exit(EXIT_FAILURE);
}
