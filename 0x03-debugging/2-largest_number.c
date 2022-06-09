#include "main.h"

/**
 * largest_number - give largest number
 * @a: 1st
 * @b: 2nd
 * @c: 3rd
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (b > a && b > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}

