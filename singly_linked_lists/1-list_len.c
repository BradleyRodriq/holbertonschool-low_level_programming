#include "lists.h"

/**
 * list_len - lists number of elements
 * @h: input to be checked
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t element_count = 0;

	while (h != NULL)
	{
		element_count++;
		h = h->next;
	}
	return (element_count);
}
