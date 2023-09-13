#include <stdio.h>
/**
 * main - main block
 * Description: Print the sum of even Fibonacci numbers
 * not exceeding 4,000,000.
 * Return: 0
 */
int main(void)
{
int i = 1, m = 2, total = 0;
int b;
while (m < 4000000)
{
if (m % 2 == 0)
total += m;
b = m;
m += i;
i = b;
}
printf("%d\n", total);
return (0);
}
