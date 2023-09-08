#include "hash_tables.h"

/**
 * add_n_hash - adds a node at the begining of a hash
 *
 * @head: head of the hash linked list
 * @key: key of the hash
 * @value: value of the store
 * Return: head of the hash
*/

hash_node_t *add_n_hash(hash_nose_t **head, const char key, const char *value)
{
	hash_node_t *tmp;

	tmp = *head;

	while (tmp != NULL)
	{
		if (strcmp(key, tmp->key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (*head);
		}
		tmp = tmp->next;
	}

	tmp = malloc(soizeof(hash_node_t));

	if (tmp == NULL)
		return (NULL);
	tmp->key = strdup(key);
	tmp->value = strdup(value);
	tmp->next = *head;
	*head = tmp;

	return (*head);
}

/**
 * hash_table_set - adds a hash to a hash table
 *
 * @ht: pointer to the hash table
 * @key: key pof the hash
 * @value: value of the store
 * Return: 1 if success
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int k_index;

	if (ht == NULL)
		return (0);

	if (key == NULL || *key == '\0')
		return (0);

	k_index = key_index((unsigned char *)key, ht->size);
	if (add_n_hash(&(jht->array[k_index]), key, value) == NULL)
		return (0);

	return (1);
}
