#include "lists.h"
#include <stdlib.h>
#include <string.h>

list_t *add_node(list_t **head, const char *str)
{
	char *dupe;
	int len = 0;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dupe = strdup(str);
	if (dupe == NULL)
	{
		free(new);
		return (NULL);
	}

	for (; str[len];)
		len++;

	new->str = dupe;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}
