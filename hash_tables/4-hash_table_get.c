#include "hash_tables.h"

/**
 *hash_table_get - A function that retrieves a value associated with a key.
 *@ht: Pointer to structure hashtable.
 *@key: Pointer to a key to retrieves.
 *Return: Value associated with the element.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp = NULL;
	unsigned long int hash = 0;

	if (!key || !*key || !ht)
		return (NULL);
	hash = key_index((unsigned char *)key, ht->size);
	tmp = ht->array[hash];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, (char *)key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}
