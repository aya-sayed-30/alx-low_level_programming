#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <math.h>
/**
*  main - checked n if is less than 6 and not 0 or greater than 5 or is 0
*
* Return: int
*/
int main(void)
{
int n, last_Digit;
srand(time(0));
n = rand() - RAND_MAX / 2;
last_Digit = n % 10;
if (last_Digit > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, last_Digit);
else if (last_Digit == 0)
printf("Last digit of %d is %d and is 0\n", n, last_Digit);
else if (last_Digit < 6 && n != 0)
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_Digit);
return (0);
}
