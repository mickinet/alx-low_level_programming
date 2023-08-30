#include "lists.h"

/**
 * sum_listint - Computes sum of all data found here -  listint_t list
 * @head: 1st node
 *
 * Return: Sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
