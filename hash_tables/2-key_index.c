#include "hash_tables.h"

/**
 *key_index - A function that gives you the index of a key.
 *@key: Pointer to Key.
 *@size: Size of array hash table.
 *Return:  The index at which the key/value..
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (size == 0 || key == NULL)
		return (0);
	return (hash_djb2(key) % size);
}
