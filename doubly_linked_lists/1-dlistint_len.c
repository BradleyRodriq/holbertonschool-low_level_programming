#include "lists.h"

/**
 * list_len - lists number of elements
 * @h: input to be checked
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
