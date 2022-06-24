#include "main.h"

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
