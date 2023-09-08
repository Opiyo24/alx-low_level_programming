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

hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
char *hash_table_get(const hash_table_t *ht, const char *key);
hash_node_t *add_n_hash(hash_node_t **head, const char *key, const char *value);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
unsigned lont int key_index(const unsigned char *key, unsogned long int size);:wq

#endif
