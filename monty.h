#ifndef MONTY_H
#define MONTY_H

#define _GNU_SOURCE
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdarg.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

extern stack_t *head;
typedef void (*op_func)(stack_t **, unsigned int);
void str_errors(int e_m, ...);
void other_errors(int e_m, ...);
void errors_msg(int e_m, ...);
void o_f(char *name_of_file);
void r_f(FILE *file_desc);
int line_by_line(char *buffer, int line_number, int format);
void find_function(char *opcode, char *value, int l_nmb, int format);
void up_function(op_func func, char *op, char *num_val, int l_nmb, int format);
void push_e(stack_t **new_node, __attribute__((unused))unsigned int l_nmb);
void print_all_v(stack_t **stack, __attribute__((unused))unsigned int l_nmb);
void top_of_stack(stack_t **stack, unsigned int line_number);
void rmv_top_of_stack(stack_t **stack, unsigned int line_number);
void print_character(stack_t **stack, unsigned int line_number);
void mul_e(stack_t **stack, unsigned int line_number);
void mod_e(stack_t **stack, unsigned int line_number);
void print_string(stack_t **stack, __attribute__((unused))unsigned int l_nmb);
void a_top_t_e(stack_t **stack, unsigned int line_number);
void div_e(stack_t **stack, unsigned int line_number);
void s_top_t_e(stack_t **stack, unsigned int line_number);
void sw_top_t_e(stack_t **stack, unsigned int line_number);
int main(int argc, char *argv[]);
void f_nodes(void);
stack_t *c_node(int n);
void a_q(stack_t **new_node, __attribute__((unused))unsigned int l_nmb);
void rotl(stack_t **stack, __attribute__((unused))unsigned int l_nmb);
void rotr(stack_t **stack, __attribute__((unused))unsigned int l_nmb);
void nop(stack_t **stack, unsigned int line_number);
#endif
