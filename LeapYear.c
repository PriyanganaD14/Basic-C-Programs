#include<stdio.h>
int main()
{
	int yr;
	printf("Enter the year : ");
	scanf("%d",&yr);
	if(yr%4==0)
	{
		printf("This year is LeapYear");
		
	}
	else
	{
		printf("This year is not LeapYear");
	}
	return 0;
}
