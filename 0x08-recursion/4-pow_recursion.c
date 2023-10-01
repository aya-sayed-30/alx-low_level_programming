#include "main.h"

/**
 * _pow_recursion - raises x to the power of y
 * @x: Number Integer
 * @y: Power
 * Return: On success 1.
 * On error, -1 is returned.
 */
int _pow_recursion(int a, int b)
{
	if (b < 0)
		return (-1);
	if (b == 0)
		return (1);
	return (a * _pow_recursion(a, b - 1));
}
