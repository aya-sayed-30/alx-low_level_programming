#include <stdio.h>

/**
 * print_buffer - Prints a buffer
 * @b: The character buffer
 * @size: The number of bytes to print from the character buffer
 */
void print_buffer(char *b, int size)
{
	int x, l;

	for (x = 0; x < size; x += 10)
	{
		printf("%08x: ", x);
		for (l = x; l < x + 10; l += 2)
		{
			if (l < size)
				printf("%02x", *(b + l));
			else
				printf("%2c", ' ');
			if (l + 1 < size)
				printf("%02x", *(b + l + 1));
			else
				printf("%2c", ' ');
			putchar(' ');
		}
		for (l = x; l < x + 10; l++)
		{
			if (l < size)
				putchar(*(b + l) < ' ' ? '.' : *(b + l));
		}
		putchar('\n');
	}
	if (size <= 0)
		putchar('\n');
}
