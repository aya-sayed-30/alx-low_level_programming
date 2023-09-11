#include <stdio.h>
/**
 * main - Entry Point
 * Return: Always 0 (Success)
 */
int main(void)
{
int m, n, f, q;
for (m = 48; m <= 57; m++)
{
for (n = 48; n <= 57; n++)
{
for (f = 48; f <= 57; f++)
{
for (q = 48; q <= 57; q++)
{
if (((f + q) > (m + n) && f >= m) || m < f)
{
putchar(m);
putchar(n);
putchar(' ');
putchar(f);
putchar(q);
if (m + n + f + q == 227 && m == 57)
{
break;
}
else
{
putchar(',');
putchar(' ');
}
}
}
}
}
}
putchar('\n');
return (0);
}
