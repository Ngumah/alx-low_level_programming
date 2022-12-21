#include "main.h"

/**
 * _strcat - appends the src string to the dest string, overwriting the
 * terminating null byte (\0) at the end of dest, and then adds a terminating
 * null byte
 * @dest: destination memory buffer
 * @src: string to be appended
 *
 * Return: pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j;

	if (dest == NULL || src == NULL)
		return (NULL);

	while (dest[i])
		i++;

	for (j = 0; src[j]; j++)
	{
		dest[i++] = src[j];	
	}

	dest[i] = '\0';

	return (dest);
}
