#include "main.h"
/**
 * print_last_digit - last digit find
 * @n: chekced number
 * Return: last digit
 */
int print_last_digit(int n)
{
	if (n < 0)
	{

	n *= -1;
	}
	_putchar('0' + (n % 10));
	return (n % 10);
}
