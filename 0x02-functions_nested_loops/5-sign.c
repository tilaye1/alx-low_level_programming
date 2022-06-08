#include "main.h"

/**
 * print_sign - sign number chck
 * @n: check number
 * Return: 1 if greater and 0 will equal and else -1 from 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
