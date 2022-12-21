#include "main.h"

/**
 * _strncat - appends the src string to the dest string, overwriting the
 * terminating null byte (\0) at the end of dest, and then adds at most n bytes
 * from the source terminating null byte
 * @dest: destination memory buffer
 * @src: string to be appended
 * @n: number of bytes to be copied
 * Return: pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j;

	if (dest == NULL || src == NULL)
		return (NULL);

	while (dest[i])
		i++;

	for (j = 0; j < n; j++)
	{
		if (src[j] != '\0')
			dest[i++] = src[j];
		else
			break;	
	}

	dest[i] = '\0';

	return (dest);
}
