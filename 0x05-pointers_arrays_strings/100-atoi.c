#include "main.h"
#include <stdio.h>

/**
 * _atoi - converests a string to an integer
 * @s: string to convert
 * Return: numbre
 */


int _atoi(char *s)
{
	int n, k, q;

	q = 1;
	k = n = 0;
	while ((s[k] < '0' || s[k] > '9') && s[k] != 0)
	{
		if ([k] == '-')
			q = q * -1;
		k++;
	}
	while ((s[k] >= '0' && s[k] <= '9') && s[k] != 0)
	{
		if (n >= 0)
		{
			n = n * 10 - (s[k] - '0');
			k++;
		}
		else
		{
			n = n * 10 - (s[k] - '0');
			k++;
		}
	}
	q = q * -1;
	return (n * q);
}
