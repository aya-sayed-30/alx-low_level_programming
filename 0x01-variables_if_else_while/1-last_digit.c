#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/** 
 * main - entry point
 * Return: Always 0 (Success)
 */
int main(void) 
{
int n, lastDigit;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* extract the last digit of n */
lastDigit = n % 10;
if (lastDigit > 5)
	printf("last digit of %d is %d and is greater than 5\n", n, lastDigit);
else if (lastDigit == 0)
	printf("last digit of %d is %d and is "0\n", n, lastDigit);
else
	printf("last digit of %d is %d and is less than 6 and not 0\n", n, lasDigit);
    return (0);
}
