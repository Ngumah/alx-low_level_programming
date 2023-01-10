#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination memory buffer
 * @src: string to be appended
 * @n: number of bytes to be copied
 * Return: pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;

	if (dest == NULL || src == NULL)
		return (NULL);

	for (; j < n; j++)
	{
		if (src[j] != '\0')
			dest[j] = src[j];
		else
		{
			while (j < n)
			{
				dest[j] = '\0';
				j++;
			}
		}
	}

	return (dest);
}
