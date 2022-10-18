#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void my_alphabet(void)
{
	char myAlpha;

	myAlpha = 'a';

	while (myAlpha <= 'z')
	{
		putchar(myAlpha);
		myAlpha++;
	}
	putchar('\n');
}
