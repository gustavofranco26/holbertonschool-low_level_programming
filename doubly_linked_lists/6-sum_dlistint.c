#include "lists.h"

/**
 * sum_dlistint - A function that returns the sum of all the data (n)
 *                of a dlistint_t linked list.
 * @head: The head of the dlistint_t list.
 * Return: Always.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
