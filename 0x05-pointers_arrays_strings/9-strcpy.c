#include "main.h"

/**
 * _strcpy - checks code
 * @src: source
 * @dest: destination
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	a = 0;
	while (*(src + a))
	{
		*(dest + a) = *(src + a);
		a++;
	}
	*(dest + a) = '\0';
	return (dest);
}
