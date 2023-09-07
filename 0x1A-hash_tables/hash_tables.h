#ifndef HASH_TABLES.H
#define HASH_TABLES.H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct hash_node_s - Node for a hash table
 *
 * @key: The key; string
 * The key is unique in the Hashtable
 * @value: The value corressponding to a key
 * @next: A pointer to the next node of the list
*/
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of te array
 * @array: An array of the size @size
 * Each cell of this array is a pointer to the first node of a linked liat
 * because we want our hashtable to use a chaining collision handling
*/
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

#endif
