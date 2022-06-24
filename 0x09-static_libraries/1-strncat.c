#include "main.h"

/**
 * _strncat - merge n bytes to destination string
 * @dest: string to be appended
 * @src: string to append
 * @n: append n number of bytes
 * Return: merged string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != src[n])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
