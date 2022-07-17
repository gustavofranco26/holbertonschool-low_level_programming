#include "lists.h"

/**
 *free_list - A function that frees a list_t list.
 *@head: point point to a struct.
 */

void free_list(list_t *head)
{
	while (head != NULL)
	{
		if (head->str)
		free(head->str);
		free(head);
		head = head->next;
	}
}
