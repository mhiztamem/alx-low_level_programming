#include "main.h"

/**
 * puts2 - checks code
 * @str: takes character to print
 *
 * Return: void
 */

void puts2(char *str)
{
	int a;

	a = 0;
	while (*(str + a))
	{
		_putchar(*(str + a));
		a = a + 2;
	}
	_putchar(''\n');
}
