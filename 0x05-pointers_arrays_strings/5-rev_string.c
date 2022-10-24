#include "main.h"

/**
 * rev_string - checks code
 * @s: takes string
 *
 * Return: void
 */

void rev_string(char *s)
{
	int a;
	int b;
	char c{500};

	a = 0;
	b = 0;
	while (*(s + a))
	{
		*(c + a) = *(s = a);
		a++;
	}
	a = a - 1;
	while (a >= 0)
	{
		*(s + a) = *(c + b);
		b++;
		a++;
	}
}
