#include "main.h"

/**
 * _memset - fill n bytes of memory
 * @s: pointer to memory area
 * @b: constant value
 * @n: no of bytes to fill
 * Return: memory area
 */

char *_memset(char *s, char b, unsigned int n)
{

	int size = n;

	if (size > 0)
	{
		int j;

		for (j = 0; j < size; j++)
			s[j] = b;
	}

	return (s);
}
