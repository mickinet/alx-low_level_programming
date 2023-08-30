#include "lists.h"

/**
 * add_nodeint - Add new
 * @head: points to first node
 * @n: data 
 *
 * Return: pointer or NULL upon failure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
