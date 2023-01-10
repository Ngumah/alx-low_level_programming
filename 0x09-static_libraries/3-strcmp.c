#include "main.h"

/**
 * _strcmp - checks equality of 2 strings
 * @s1: first string
 * @s2: second string
 *
 * Return: returns 0 if string equal otherwise int > 0 or < 0
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int l1 = 0, l2 = 0;
	int res = 0;

	if (s1 == NULL)
		return (s2[0]);
	if (s2 == NULL)
		return (s1[0]);

	while (s1[l1])
		l1++;
	while (s2[l2])
		l2++;

	while (s1[i])
	{
		if ((s1[i] - s2[i]) != 0)
		{
			res = s1[i] - s2[i];
			return (res);
		}
		i++;
	}

	if (l1 < l2)
		return (s2[i]);
	else
		return (res);
}
