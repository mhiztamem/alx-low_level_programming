#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        int Bnum;

        for (Bnum = 0; Bnum < 10; Bnum++)
                putchar((Bnum % 10) + '0');
        putchar('\n');
        return (0);
}

