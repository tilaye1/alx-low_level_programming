#include <stdio.h>

/**
 * main- entry point for printing numbers
 * Return: Always 0
 */

int main(void)
{
	char alpha = 'z';

	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');

	return (0);
}
