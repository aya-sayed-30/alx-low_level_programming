#include "main.h"
/* #include <string.h> */
#include <stdio.h>

/**
 **leet - unction that encodes a string into 1337.
 *Letters a and A should be replaced by 4
 *Letters e and E should be replaced by 3
 *Letters o and O should be replaced by 0
 *Letters t and T should be replaced by 7
 *Letters l and L should be replaced by 1
 *@s: pointer caracter
 *Return: string of pointer type
 */

char *leet(char *s)
{
	int i = 0, m;
	char sc[] = {'A', 'E', 'O', 'T', 'L',};
	char n[] = {'4', '3', '0', '7', '1',};

	while (s[i])
	{
		/* printf ("s[i] = %c, ", s[i]); */
		m = 0;

		while (m < 5)
		{
			if (s[i] == sc[m] || s[i] - 32 == sc[m])
			{
				s[i] = n[m];
				break;
			}

			m++;
		}

		i++;
	}
	return (s);
}
