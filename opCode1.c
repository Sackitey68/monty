#include "monty.h"

/**
  * add - adds top two elements of the stack
  * @stack: beginning of doubly linked list
  * @line_n: number of line
  */
void add(stack_t **stack, unsigned int line_n)
{
	if (!(*stack) || !(*stack)->next)
	{
		free_stack(*stack);
		fprintf(stderr, "L%d: can't add, stack too short\n", line_n);
		exit(EXIT_FAILURE);
	}
	(*stack)->next->n += (*stack)->n;
	pop(stack, line_n);
}

/**
 * sub - adds top two elements of the stack
 * @stack: start of doubly linked list
 * @line_n: number of line
 */
void sub(stack_t **stack, unsigned int line_n)
{
	if (!(*stack) || !(*stack)->next)
	{
		free_stack(*stack);
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_n);
		exit(EXIT_FAILURE);
	}
	(*stack)->next->n -= (*stack)->n;
	pop(stack, line_n);
}
/**
 * _div - adds top two elements of the stack
 * @stack: start of doubly linked list
 * @line_n: number of line
 */
void _div(stack_t **stack, unsigned int line_n)
{
	if (!(*stack) || !(*stack)->next)
	{
		free_stack(*stack);
		fprintf(stderr, "L%d: can't div, stack too short\n", line_n);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n == 0)
	{
		free_stack(*stack);
		fprintf(stderr, "L%d: division by zero\n", line_n);
		exit(EXIT_FAILURE);
	}
	(*stack)->next->n /= (*stack)->n;
	pop(stack, line_n);
}

/**
 * mod - adds top two elements of the stack
 * @stack: start of doubly linked list
 * @line_n: number of line
 */
void mod(stack_t **stack, unsigned int line_n)
{
	if (!(*stack) || !(*stack)->next)
	{
		free_stack(*stack);
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_n);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n == 0)
	{
		free_stack(*stack);
		fprintf(stderr, "L%d: division by zero\n", line_n);
		exit(EXIT_FAILURE);
	}
	(*stack)->next->n %= (*stack)->n;
	pop(stack, line_n);
}

/**
 * mul - adds top two elements of the stack
 * @stack: start of doubly linked list
 * @line_n: number of line
 */
void mul(stack_t **stack, unsigned int line_n)
{
	if (!(*stack) || !(*stack)->next)
	{
		free_stack(*stack);
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_n);
		exit(EXIT_FAILURE);
	}
	(*stack)->next->n *= (*stack)->n;
	pop(stack, line_n);
}
