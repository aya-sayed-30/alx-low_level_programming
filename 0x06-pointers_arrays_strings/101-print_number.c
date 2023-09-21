#include <stdio.h>
#include "main.h"

/**
* print_number - prints an integer
* @n: integer
**/

void print_number(int n)
{
	unsigned int no;

	if (n < 0)
	{
		no = -n;
		_putchar('-');
	}
	else
		no = n;

	if (no > 9)
	{
		print_number(no / 10);
	}
	_putchar(no % 10 + '0');
}
