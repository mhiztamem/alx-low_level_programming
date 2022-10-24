#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - checks code to generate random passwords
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a, b, c, d;
	char e[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char f[58];

	srand(time(NULL));
	while (d != 2772)
	{
		a = c = d = 0;
		while ((2772 - 122) > d)
		{
			b = rand() % 62;
			f[a] = e[b];
			d += e[b];
			a++;
		}
		while (e[c])
		{
			if (e[c] == (2772 - d))
			{
				f[a] = e[c];
				d += e[c];
				a++;
				break;
			}
			c++;
		}
	}
	f[a] = '\0';
	printf("%s", f);
	return (0);
}
