#include <stdio.h>
#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest_number;

	/**printf("Enter first number: %d", a);
	scanf("%d", &a);
	printf("Enter second number: %d", b);
	scanf("%d", &b);
	printf("Enter third number: %d", c);
	scanf("%d", &c);
	*/

	if (a >= b && b >= c)
	{
		largest_number = a;
	}
	else if (b >= a && a >= c)
	{
		largest_number = b;
	}
	else
	{
		largest_number = c;
	}
	//printf("largest number is: %d\n", largest_number);

	return (largest_number);
}
