#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * return: On success 1
 * on Error, -1 is returned and erno is set appropriately
*/

int _putchar(char c)
{
	return (write (1, &c, 1));
}
