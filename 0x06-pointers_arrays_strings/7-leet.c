#include "main.h"

/**
 * leet - encode the string to leet code
 * @str: string
 *
 * Return: leet string
 */
char *leet(char *str)
{
	int i;
	int c = 0;
	char leet_arr[5] = {'A', 'E', 'O', 'T', 'L'};
	char leet_arr2[5] = {'a', 'e', 'o', 't', 'l'};
	char leet_map[5] = { '4', '3', '0', '7', '1'};

	while (str[c])
	{
		for (i = 0; i < 5; i++)
		{
			if (str[c] == leet_arr[i] || str[c] == leet_arr2[i])
				str[c] = leet_map[i];
		}
		c++;
	}
	return (str);
}
