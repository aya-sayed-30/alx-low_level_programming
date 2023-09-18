#include "main.h"

/**
* _strlen - returns the length of a string.
* @s: a pointer to a char
**/

int _strlen(char *s)
{
	int l, i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	l = i;
	return (l);
}

/**
* puts2 - prints one char out of 2 of a string
* @str: a pointer to string
**/

void puts2(char *str)
{
	int i;
	int size = _strlen(str);

	for (i = 0; i < size; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
