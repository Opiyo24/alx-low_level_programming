#include "main.h"

/**
 * flip_bits – returns the number of bitsneeded to
 * flip to get from one number to another
* @n: the first number
 * @m: the econd number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, counter = 0;
	unsigned long int c;
	unsigned long int y = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		c = y >> a;
		if (c & 1)
			counter++;
	}

	return (counter);
}
