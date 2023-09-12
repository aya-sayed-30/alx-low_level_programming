#include "main.h"

/**
 * _isalpha - checks if an input
 * @c: character is lower or not
 * Return: 1 if true and 0 if false
 */
int _isalpha(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
