#include<stdio.h>

int main()
{
	int hour;
	
	printf("Enter the working hour :");
	scanf("%d",&hour);
	
	if(hour==2 || hour==3)
	{
		printf("\n Highly Efficient");
	}
	
	else if(hour==3 || hour==4)
	{
		printf("\n Improve Your Speed");
	}
	
	else if(hour==4 || hour==5)
	{
		printf("\n Given Trining To Improve Speed");
	}
	
	else if(hour>5)
	{
		printf("\n Leave The Company");
	}
	
	return 0;
}
