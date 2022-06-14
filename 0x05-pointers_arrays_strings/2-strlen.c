#include "main.h"

/**
 * _strlen - check sring length
 * @s: string
 * @Return: retunn value
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
