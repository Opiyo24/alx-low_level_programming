#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * _putchar - prints a character one by one as provided
 * in arguments
 * @c: character to be printed
 * Return: the character
*/

int _putchar(char c)
{
	return (write (1, &c, 1));
}
