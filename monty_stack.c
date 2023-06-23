#define _POSIX_C_SOURCE 200809L

#include "monty.h"
#include <stdio.h>

/* Function Declarations */
void push_stack(stack_t **stack, unsigned int line_number);
void push_queue(stack_t **stack, unsigned int line_number);

int stack_mode = 0; /* Default mode is stack (LIFO) */

void stack(stack_t **stack, unsigned int line_number)
{
    (void)stack;
    (void)line_number;
    stack_mode = 0;
}

void queue(stack_t **stack, unsigned int line_number)
{
    (void)stack;
    (void)line_number;
    stack_mode = 1;
}

void push(stack_t **stack, unsigned int line_number)
{
    if (stack_mode == 0)
	    push_stack(stack, line_number);
    else
	    push_queue(stack, line_number);
}

void push_stack(stack_t **stack, unsigned int line_number)
{
    /* Implementation for stack mode (LIFO) */
    /* ... */
    (void)stack;
    (void)line_number;
}

void push_queue(stack_t **stack, unsigned int line_number)
{
    /* Implementation for queue mode (FIFO) */
    /* ... */
    (void)stack;
    (void)line_number;
}

