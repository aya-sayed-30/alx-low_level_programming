#include "main.h"
/**
 * times_table - prints the 9 times table
 * starting from 0.
 */
void times_table(void)
{
int n, m, d;
for (n = 0; n <= 9; n++)
{
_putchar('0');
for (m = 1; m <= 9; m++)
{
_putchar(',');
_putchar(' ');
d = n * m;
if (d <= 9)
_putchar(' ');
else
_putchar((d / 10) + '0');
_putchar((d % 10) + '0');
}
_putchar('\n');
}
}
