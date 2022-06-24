#include "main.h"

/**
 * _islower- chacks if the character is lowercase
 * @c: character to check
 * Return: 1 if lower or else upper
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
