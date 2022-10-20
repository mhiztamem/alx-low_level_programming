#include <stdio.h>
#include "main.h"

/**
 * main - takes a date and prints how many days are left in the year, taking
 * leap years into account
 * Return: 0
 */

int main(void)
{
	int year;
	int month;
	int day;
	
	year = 0;
	printf("Enter year: %d", year);
	scanf("%d", &year);
	printf("Enter month: %d", month);
	scanf("%d", &month);
	printf("Enter day: %d", day);
	scanf("%d", &day);
	printf("Date: %02d/%02d/%04d\n", month, day, year);
	convert_day(month,day);
	print_remaining_days(month, day, year);
	return(0);
}
