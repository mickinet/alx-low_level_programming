#include "lists.h"

/**
 * listint_len - Number of elements
 * @h: lkd list listint_t - traverse
 *
 * Return: Node number
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
