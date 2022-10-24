#include <stdio.h>
#include "main.h"

/**
 * print_array - checks code
 * @a: array container
 * @n: amount of elements
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int b;

	b = 0;
	while (b < n)
	{
		printf("%d", a[b]);
		if (a < (n - 1))
			printf(", ");
		b++;
	}
	printf("\n");
}
