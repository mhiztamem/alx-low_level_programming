#include <stdlib.h>
#include "main.h"
/**
 * _strspn - searchs a string for any of a set of bytes
 *
 * @s: the string to search
 * @accept: the bytes to search for
 *
 * Return: a pointer to the byte in @s that matches one of the bytes in
 * @accept, or NULL if no such byte is found.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, z, count, checker;

	i = 0;
	z = 0;
	checker = 0;
	count = 0;
	while (s[i] != '\0')
	{
		z = 0;
		checker = 0;
		while (accept[z] != '\0')
		{
			if (accept[z] == s[i])
			{
				count++;
				checker = 1;
			/* Break to early increase efficiency */
				break;
			}
			z++;
		}
		if (checker == 0)
			return (count);
		i++;
	}
	return (count);
}
