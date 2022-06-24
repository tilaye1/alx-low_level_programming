#include "main.h"

/**
 * _abs - print absolute number
 * @n: check number
 * Return: value
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else
		return (0);
}
