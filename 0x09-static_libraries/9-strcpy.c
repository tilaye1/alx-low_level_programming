#include "main.h"

/**
 * _strcpy - copy a string with null byte
 * @dest: a place where to put
 * @src: a string to be copied
 * Return: copied value
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= _strlen(src); i++)
		dest[i] = src[i];
	return (dest);
}
/**
 * _strlen - check string length
 * @s: string
 * Return: return value
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

