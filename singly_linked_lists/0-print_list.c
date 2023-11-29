#include "lists.h"
#include <stdio.h>
#include <unistd.h>

/**
 * print_list - prints all the elements of a list_t list.
 * @h: the first cell
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int i = 0;
	const list_t *current = h;
	size_t count = 0;

	if (h == NULL)
	{
		return (0);
	}
	if (current->str == NULL)
	{
		printf("[%d] (nil)\n", 0);
		current = current->next;
	}
	while (current != NULL)
	{
		printf("[%d] ", current->len);
		if (current->str != NULL)
		{
			if (i < current->len)
			{
				printf("%s\n", current->str);
			}
			else
			{
				printf("(nil)\n");
			}
		}
		current = current->next;
		count++;
	}
	return (count);
}

