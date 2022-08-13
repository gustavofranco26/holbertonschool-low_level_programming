#include "lists.h"
#include <stdio.h>

/**
 * listint_len - A function that returns the number of elements
 *               in a linked listint_t list.
 * @h: A pointer to the head.
 * Return: Always.
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
