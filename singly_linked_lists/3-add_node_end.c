#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to the head of the list_t list
 * @str: the string to be added to the list_t list
 * Return: NULL if fails, address of the new element if success
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *dupe;
	int len = 0;
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dupe = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (; str[len];)
		len++;

	new->str = dupe;
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
	return (last);
}
