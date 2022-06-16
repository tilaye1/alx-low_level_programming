#include "main.h"

/**
 * reverse_array - reverse array
 * @a: array
 * @n: number of elements in array
 */

void reverse_array(int *a, int n)
{

	int tmp, start = 0;
	int end = n - 1; /* omit null terminator in length */

	while (start < end)
	{
		tmp = *(a + start);
		*(a + start) = *(a + end);
		*(a + end) = tmp;
		start++, end--;
	}
}
