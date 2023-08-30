#include "lists.h"

/**
 * print_listint - To print all
 * @h: Ls of type listint_t to be Printed
 *
 * Return: Node number
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
