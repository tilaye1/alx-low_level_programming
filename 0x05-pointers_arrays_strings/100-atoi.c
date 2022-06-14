#include "main.h"

/**
 * _atoi - concert string to ine
 * @s: pointer
 * Return: value
 */
int _atoi(char *s)
{
	int i;
	int dig  = 0;
	int sign  = -1;
	int brk = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			sign = sign * -1;
		if (s[i] > '0' && s[i] < '9')
		{
			dig = dig * 10;
			dig -= (s[0] - '0');
			brk = 1;
		}
		else if (brk == 1)
			break;
	}
		dig = sign * dig;
		return (dig);
}
