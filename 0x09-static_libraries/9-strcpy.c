#include "main.h"

/**
 * _strcpy -  copies the string pointed to by src, including the
 * terminating null byte, to the buffer pointed to by dest
 * @src: source
 * @dest: destination
 *
 * Return: pointer to the destination pointer
 */
char  *_strcpy(char *dest, char *src)
{
	int i = 0;

	if (dest == NULL || src == NULL)
	{
		return (NULL);
	}

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
