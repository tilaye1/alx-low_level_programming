#include <stdio.h>

/**
 * main- entry point for printing numbers
 * Return: Always 0
 */

int main(void)
{
	int n;

	while (n > 10)
	{
		printf("%i", n);
		n++;
	}
	putchar('\n');

	return (0);
}
