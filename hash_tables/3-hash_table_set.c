#include "hash_tables.h"
/**
 *hash_table_set - A function that adds an element to the hash table.
 *@ht: Pointer to a struct hashtable
 *@key: key to add
 *@value: Value of the key
 *Return: 1 if it succeeded, 0 otherwise.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *bucket = NULL, *tmp = NULL;
	unsigned long int hash = 0;

	if (!ht || !key || !*key || !value || !*value)
		return (0);
	hash = key_index((unsigned char *)key, ht->size);
	tmp = ht->array[hash];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, (char *)key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup((char *)value);
			if (!tmp->value)
				return (0);
			return (1);
		}
		tmp = tmp->next;
	}
	bucket = malloc(sizeof(hash_node_t));
	if (!bucket)
		return (0);
	bucket->key = strdup((char *)key);
	if (bucket->key == NULL)
	{
		free(bucket);
		return (0);
	}
	bucket->value = strdup(value);
	if (bucket->value == NULL)
	{
		free(bucket->key);
		free(bucket);
		return (0);
	}
	bucket->next = ht->array[hash];
	ht->array[hash] = bucket;
	return (1);
}
