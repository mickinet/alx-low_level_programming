#include "lists.h"

/**
 * get_nodeint_at_index - Node at particular index
 * @head: 1st node in lkd list
 * @index: node index
 *
 * Return: Node pointer of interest or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
