#include "main.h"
/**
 *jack_bauer - unction that prints every minute of the day of Jack Bauer,
 *starting from 00:00 to 23:59.
 *Return: NULL
 */
void jack_bauer(void)
{
int hour;
for (hour = 0; hour <= 23; hour++)
{
int minute = 0;
while (minute <= 59)
{
_putchar (hour / 10 + '0');
_putchar (hour %  10 + '0');
_putchar (':');
_putchar (minute / 10 + '0');
_putchar (minute % 10 + '0');
_putchar ('\n');
minute++;
}
}
}
