#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 * Description: my keygen.
 * Return: 0.
 */

int main(void)
{
	int i = 0;
	int n = 0;
	int m = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (n < 2772)
	{
		i = rand() % 128;
		if ((n + i) > 2772)
			break;
		n += i;
		m++;
		printf("%c", i);
	}
	printf("%c\n", (2772 - n));
	return (0);
}
