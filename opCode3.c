#include "monty.h"

/**
 * rotl - top element becomes last second becomes top
 * @stack: top of the stack - doubly linked list
 * @line_n: number of line
 */
void rotl(stack_t **stack, unsigned int line_n)
{
	stack_t *last = *stack, *head = *stack;

	if (line_n)
		line_n = line_n;
	if (head && head->next)
	{
		*stack = head->next;
		(*stack)->prev = NULL;
		for (; last->next; last = last->next)
			;
		last->next = head;
		head->next = NULL;
		head->prev = last;
	}
}

/**
 * rotr - last element becomes first
 * @stack: top of the stack - doubly linked list
 * @line_n: line number
 */
void rotr(stack_t **stack, unsigned int line_n)
{
	stack_t *last = *stack;

	if (line_n)
		line_n = line_n;
	if (*stack && (*stack)->next)
	{
		for (; last->next; last = last->next)
			;
		last->prev->next = NULL;
		last->prev = NULL;
		last->next = *stack;
		(*stack)->prev = last;
		*stack = last;
	}
}

/**
 * queue - the doubly linked list
 * @stack: top of the stack - doubly linked list
 * @line_n: line number
 */
void queue(stack_t **stack, unsigned int line_n)
{
	stack_t *flip = *stack, *hold = *stack;

	if (line_n)
		line_n = line_n;
	if (*stack && ((*stack)->next))
	{
		while (1)
		{
			hold = flip->next;
			flip->next = flip->prev;
			flip->prev = hold;
			if (hold != NULL)
				flip = hold;
			else
				break;
		}

		*stack = flip;
	}
}
