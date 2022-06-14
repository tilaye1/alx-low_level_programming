#include "main.h"

/**
 * _strlen - check string length
 * @s: string
 * Return: return value
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * index_starting - copy a string with null byte
 * @s: a place where to put
 * @src: string
 * Return: return index
*/
int index_starting(char *s)
{
	int i;

	for (i = 0; i <= _strlen(src); i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
			return (i);
	}
	return (-1);
}
/**
 * check_sign - check wether it is neg or pos
 * @s: string
 * Return: return neg or pos
 */
int check_sign(char *s)
{
	int neg = 0;
	int i = 0;
	int sign  =  1;

	while (i < (index_starting(s)))
	{
		if (s[i++] == '-')
			neg++;
	}
	if (neg % 2 != 0)
		sign = -1;
	return (sign);
}

/**
 * _atoi - convert string to an int
 * @s:string to be converted
 * Return: integer value
 */
int _atoi(char *s)
{
	int index_start = index_starting(s);
	int sign;
	int num_print = 0;
	int t = 1, i;
	unsigned int digit = 0;
	int dig = (index_start(s));


	if (index_start < 0)
		return (0);
	sign  = find_sign(s);
	while ((s[index_start] >= '0' && s[indext_start] <= '9') 
			&& (index_start <= _strlen(s)))
	{
		num_print += 1;
		index_start++;
	}

	i = 1;
	while (i < num_print)
	{
		t *= 10;
		i++;
	}

	for (i = dig; i < (dig + num_print); i++)
	{
		digit += (s[i] - '0') * t;
		t /= 10;
	}
	return (num * sign);
}


