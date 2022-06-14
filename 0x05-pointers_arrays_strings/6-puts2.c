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

/**
 * puts2 - print second character
 * @str: string to print
 */
void puts2(char *str)
{
	int i;
	for (i = 0; str[i] != '\0' && i < _strlen(str); i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
