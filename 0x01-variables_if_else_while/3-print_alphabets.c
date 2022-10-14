#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        char myChar;
        char myChar1;

        for (myChar = 'a'; myChar <= 'z'; myChar++)
                putchar(myChar);
        for (myChar1 = 'A'; myChar1 <= 'Z'; myChar1++)
                putchar(myChar1);
        putchar('\n');
        return (0);
}
