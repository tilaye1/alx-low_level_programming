#include "main.h"

/**
 * main- Entry print to Print lower  case alphabet 
 * Return: Always 0
 */
int print_alphabet(void)
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
