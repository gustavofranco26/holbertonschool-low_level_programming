#include "lists.h"

/**
 *list_len - A function that returns the number of elements in a linked list_t list.
 *@h: A variable pointing to a struct of type list_t.
 *Return: Always.
 */

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
