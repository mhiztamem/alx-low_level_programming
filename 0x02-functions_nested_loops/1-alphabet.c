#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char myAlpha;

	myAlpha = 'a';

	while (myAlpha <= 'z')
	{
		putchar(myAlpha);
		myAlpha++;
	}
	return (0);
}
