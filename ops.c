#include "monty.h"

/**
 * free_stack - free doubly linked list
 * @head: start of the doubly linked list
 */

void free_stack(stack_t *head)
{
	stack_t *hold;

		while (head)
		{
			hold = head;
			head = (*head).next;
			free(hold);
		}
}
