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
 * puts_half - print half of string
 * @str: string
 */

void puts_half(char *str)
{
	int idx;
	int len = _strlen(str);

	if (len % 2 != 0)
		idx = (len / 2) + 1;
	else
		idx  = len / 2;
	while (idx < len)
	{
		_putchar(*(str + idx));
		idx++;
	}
	_putchar('\n');
}

