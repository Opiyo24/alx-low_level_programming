#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - print_name
 * print_name - Function that prints a name as passed to it
 * @name: The name to print
 * @f:pointer to the function
 *
 * Return: Nothing
*/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
