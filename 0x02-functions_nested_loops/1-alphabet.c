#include "main.h"

/**
 * print_alphabet- Entry print to Print lower  case alphabet
 * Return: Always 0
 */
void print_alphabet(void)
{
	char alpha;

	alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
