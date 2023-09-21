#include "main.h"
/**
* reverse_array - a function that reverses the content of an array of integers
* @a: integer
* @n: integer
* Return: nothing
**/

void reverse_array(int *a, int n)
{
	int k;
	int i;
	int m = n - 1;

	for (i = 0; i < m; i++, m--)
	{
		k = a[i];
		a[i] = a[m];
		a[m] = k;
	}

}
