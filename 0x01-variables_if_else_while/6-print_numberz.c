#include <stdio.h>

/**
 * main- entry point for printing numbers
 * Return: Always 0
 */

int main(void)
{
	int n = '0';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	putchar('\n');

	return (0);
}
