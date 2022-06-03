#include <stdio.h>

/**
 * main - entry point
 * Return: always 0
 */
int main(void)
{
	int n = '0';
	int base16 = 'a';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	while (base16 <= 'f')
	{
		putchar(base16);
		base16++;
	}

	putchar('\n');

	return (0);
}
