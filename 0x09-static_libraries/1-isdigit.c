#include "main.h"


/**
 * _isdigit - wether is digit or not
 * @c: checked character
 * Return: 1 if true
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

