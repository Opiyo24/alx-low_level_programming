#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * return: on success 1
 * on Error, -1 is returned and erno is set approprioately
*/

int _putchar(char c)
{
	return (write (1, &c, 1));
}
