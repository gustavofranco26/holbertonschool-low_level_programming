#include "hash_tables.h"

/**
 *hash_table_delete - A function that deletes a hash table.
 *@ht: Pointer to structure hash_table.
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned int i = 0;
	hash_node_t *head = NULL;
	hash_node_t *tmp = NULL;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		head = ht->array[i];
		while (head != NULL)
		{
			tmp = head->next;
			free(head->key);
			free(head->value);
			free(head);
			head = tmp;
		}
	}
	free(ht->array);
	free(ht);
}
