#include <stdlib.h>
#include "lists.h"

/**
 * returns elements in a linked list -list
 * @h: list_pointer
 *
 * Return: h -Number of elements
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
