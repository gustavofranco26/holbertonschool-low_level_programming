#include "lists.h"

/**
 *add_node_end - A function that adds a new node at the end of a list_t list.
 *@head: point point to a struct.
 *@str: String to copy.
 *Return: Always.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nodenew;
	list_t *nodeprev = *head;
	unsigned int i;

	nodenew = malloc(sizeof(list_t));
	if (nodenew == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	nodenew->str = strdup(str);
	nodenew->len = i;
	nodenew->next = NULL;

	if (*head == NULL)
	{
		*head = nodenew;
		return (nodenew);
	}
	else
	{
		while (nodeprev->next != NULL)
			nodeprev = nodeprev->next;
		nodeprev->next = nodenew;
	}
	return (nodenew);
}
