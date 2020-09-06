#include <stdio.h>
int main()
{
	int yr; //yr=input year
	printf("Enter the year : ");
	scanf("%d", &yr);
	if (yr % 4 == 0) // codintion for if the year is leapyear
	{
		printf("This year is LeapYear");
	}
	else // if the year is not a leapyear
	{
		printf("This year is not LeapYear");
	}
	return 0;
}
