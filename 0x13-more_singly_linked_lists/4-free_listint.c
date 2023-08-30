#include "lists.h"

/**
 * @head: listint_t - free list
 * free_listint - This frees lkd list
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
