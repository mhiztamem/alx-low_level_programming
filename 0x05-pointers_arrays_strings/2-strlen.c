#include "main.h"

/**
 * _strlen - checks the code
 * @s: checks length
 *
 * Return: Always 1 (Success)
 */
int _strlen(char *s)
{
	int a;

	a = 0;
	while (*(s + a))
	{
		a++;
	}

	return (1);
}
