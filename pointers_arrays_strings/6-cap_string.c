#include "main.h"

/**
 * string_toupper - Changes all lowercase letters
 *                  of a string to uppercase.
 * @str: The string to be changed.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *str)
{
	int i = 0;

	while (str[i])
	{
		while (!(str[i] >= 'a' && str[i] <= 'z'))
			i++;

		if (str[i] - 1 == ' ' ||
				str[i] - 1 == '\t' ||
				str[i] - 1 == '\n' ||
				str[i] - 1 == ',' ||
				str[i] - 1 == ';' ||
				str[i] - 1 == '.' ||
				str[i] - 1 == '!' ||
				str[i] - 1 == '?' ||
				str[i] - 1 == '"' ||
				str[i] - 1 == '(' ||
				str[i] - 1 == ')' ||
				str[i] - 1 == '{' ||
				str[i] - 1 == '}' ||
				str[i] - 1 == '[' ||
				str[i] - 1 == ']' ||
				i == 0)
			str[i] -= 32;
		i++;
	}
	return (str);
}
