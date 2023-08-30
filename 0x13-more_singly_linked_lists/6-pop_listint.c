#include "lists.h"

/**
 * pop_listint - Head node delete
 * @head: Pointer to 1st element
 *
 * Return: Deleted data in element,
 * or 0 upon empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
