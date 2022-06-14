#include "main.h"

/**
*swap_int - swap two integers value
*@a:integer
*@b: integer
*/
int swap_int (int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
