#include "hash_tables.h"

/**
 * hash_djb2 - implements the djb2 algorithm
 * Designed to produce good hash valiues for strings
 *
 * @str: fior whose hash value is to be generated
 * @Return: a hash index
*/

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c;
	}
	return (hash);
}
