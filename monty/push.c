#!/bin/bash
#include "monty.h"

/**
 * push - adds data to the top most node of a stack
 *
 * @data: in int type - to be added to stack
 * Return: void
*/

void push(int data)
{
	stack_t new_stack;
	int i;

	data = (int)malloc(sizeof(data));
	new_stack = (stack_t)malloc(sizeof(stack_t));
	if (new_stack == NULL)
	{
		fprintf(stderr, "L<line_number>: usage: push integer");
		return;
	}

	
