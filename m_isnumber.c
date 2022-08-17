#include "monty.h"
/**
 * _isnumber - check string is number
 *
 * @str: string to be parses
 * Return: 0 if false and otherwise, 1 if string is number
 */
int _isnumber(char *str)
{
	unsigned int i;

	if (str == NULL)
		return (0);
	i = 0;
	while (str[i])
	{
		if (str[0] == '-')
		{
			i++;
			continue;
		}
		if (!isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}
