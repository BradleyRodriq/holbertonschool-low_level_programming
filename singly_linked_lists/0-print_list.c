#include "lists.h"
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

	if (current->str == NULL)
	{
		_putchar ('[');
		_putchar ('0');
		_putchar (']');
		_putchar (' ');
		_putchar ('(');
		_putchar ('n');
		_putchar ('i');
		_putchar ('l');
		_putchar (')');
		_putchar ('\n');
		count++;
		current = current->next;
	}
	while (current != NULL)
	{
		_putchar ('[');
		_putchar (current->len + '0');
		_putchar (']');
		_putchar (' ');
		i = 0;
		if (current->str != NULL)
		{
			while (i < current->len)
			{
				_putchar (current->str[i]);
				i++;
			}
		}
		_putchar ('\n');
		current = current->next;
		count++;
	}
	return (count);
}

