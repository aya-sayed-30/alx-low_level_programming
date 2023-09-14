#include "main.h"

/**
* print_diagonal - prints diagonal line on the terminal
*@n: numbers of lines and columns
**/

void print_diagonal(int n)
{
	int a, b;

	for (a = 0; a < n; a++)
	{
		for (b = 0; b <= l; b++)
		{
			if (b != l)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('\\');
			}

		}
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
