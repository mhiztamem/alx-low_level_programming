#include "main.h"

/**
 * _isupper - checks for uppercase letters
 * @a: character to check
 *
 * Return: 0 or 1
 */


int _isupper(int a)
{
	if (a >= 'A' && a <= 'Z')
		return (1);
	else
		return (0);
}
