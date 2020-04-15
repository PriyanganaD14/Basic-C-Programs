#include<stdio.h>

int main()
{
	int yr;
	
	printf("Enter any year : ");
	scanf("%d",&yr);
	
	if(yr%4==0 && yr%100!=0 || yr%400==0)
	{
		printf("LEAPYEAR");
	}
	
	else
	{
		printf("NOT LEAPYEAR");
	}
	
	return 0;
}
