#include "main.h"
/**
 * _puts - prints a string followed by a new line to stdout
 * @str: string to print
 * _putchar - prototype function
*/
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s++);
	}
	_putchar('\n');
}
