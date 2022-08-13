#include "lists.h"

/**
 * pop_listint - A function that deletes the head node of listint_t list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * Return: Always.
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int ret;

	if (*head == NULL)
		return (0);
	tmp = *head;
	ret = (*head)->n;
	*head = (*head)->next;

	free(tmp);
	return (ret);
}
