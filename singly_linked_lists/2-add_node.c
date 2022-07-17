#include "lists.h"

/**
 *add_node - A function that adds a new node at the beginning of a list_t list.
 *@head: point point to a struct.
 *@str: String to copy.
 *Return: Always.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *nodenew;
	unsigned int i;

	nodenew = malloc(sizeof(list_t));
	if (nodenew == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;

	nodenew->str = strdup(str);
	nodenew->len = i;
	nodenew->next = *head;
	*head = nodenew;

	return (nodenew);
}
