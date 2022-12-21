#include "main.h"

/**
 * cap_string - capitalize all words of a string
 * @str: string
 *
 * Return: returns result
 */
char *cap_string(char *str)
{
	int i = 0;
	int sep = 0;

	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = str[0] - 32;
		i++;
	}

	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
				|| str[i] == ',' || str[i] == ';' ||
				str[i] == '.' || str[i] == '!' || str[i] == '?'
				|| str[i] == '"' || str[i] == '(' ||
				str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			sep = 1;
		}
		else
		{
			if (sep)
			{
				if (str[i] >= 'a' && str[i] <= 'z')
				{
					str[i] = str[i] - 32;
				}
				sep = 0;
			}
		}
		i++;
	}
	return (str);
}
