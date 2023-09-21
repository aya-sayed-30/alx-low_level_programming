#include "main.h"

/**
* *_strncat - concatenates two strings.
* @dest: string to be appended
* @src: string to be appended from
* @n: number of bytes from src
* Return: a pointer to the resulting string dest
**/

char *_strncat(char *dest, char *src, int n)
{
	int i, m;

	if (n <= 0)
	{
		return (dest);
	}

	i = 0;
	m = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (m < n && src[m] != '\0')
	{
		dest[i++] = src[m++];
	}
	dest[i++] = '\0';
	return (dest);
}
