#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: is the number of times the character _ should be printed
 *
 */

void print_line(int n)
{
	int ln;

	for (ln = 0; ln < n; ln++)
		_putchar('_');
	_putchar('\n');
}
