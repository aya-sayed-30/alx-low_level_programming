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
      if (lastDigit > 5) {
        printf("greater than 5\n", n, lastDigit);
    } else if (lastDigit == 0) {
        printf("0\n", n, lastDigit);
    } else {
        printf("less than 6 and not 0\n", n, lastDigit);
    }
    return (0);
}
