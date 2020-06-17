#include<stdio.h>

int main()
{
	int n;
	printf("Enter the year :\n");
	scanf("%d",&n);
	
	leapyear(n);
	
	return 0;
}

leapyear(int y)
{
	
	if(y%4==0 && y%100!=0 || y%400==0)
	{
		printf("LeapYear");
	}
	
	else
	{
		printf("No Leapyear");
	}
}
