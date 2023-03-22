#include "main.h"
/**
 * main - check thecode
 *
 * Return: Always 0
*/

int main(void)
{
	int r;

	r = print_sgn(98);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');
	r = print_sgn(0);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');
	r = print_sgn(0xff);
	_putchar(',');
	_putchar(' ');
	_putchar(r + 0);
	_putchar('\n');
	r = print_sgn(-1);
	_putchar(',');
	_putchar(' ');
	_putchar(r + 0);
	_putchar('\n');
	return(0);
}

