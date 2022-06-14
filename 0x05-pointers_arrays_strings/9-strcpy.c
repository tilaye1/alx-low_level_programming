#include "main.h"

/**
 * _strcpy - copy a string with null byte
 * @dest: a place where to put
 * @src: a string to be copied
 * Return: copied value
*/
char *_strcpy(char *dest, char *src)
{
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (dest);
}
