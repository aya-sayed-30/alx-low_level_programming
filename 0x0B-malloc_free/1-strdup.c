#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 * Return: pointer of an array of chars
 */
char *_strdup(char *str)
{
	char *strout;
	unsigned int n, m;

	if (str == NULL)
		return (NULL);

	for (n = 0; str[n] != '\0'; n++)
		;

	strout = (char *)malloc(sizeof(char) * (n + 1));

	if (strout == NULL)
		return (NULL);

	for (m = 0; m <= i; m++)
		strout[m] = str[m];

