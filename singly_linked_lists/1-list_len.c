#include "lists.h"

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
