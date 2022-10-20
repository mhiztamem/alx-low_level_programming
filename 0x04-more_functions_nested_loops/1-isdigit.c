#include "main.h"

/**
 * _isdigit - checks for characters that are digits
 * @a: character to check
 *
 * Return: 0 or 1
 */


int _isdigit(int a)
{
	if (a >= '0' && a <= '9')
		return (1);
	else
		return (0);
}
