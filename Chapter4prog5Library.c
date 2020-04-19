#include<stdio.h>

int main()
{
	int d;                       //d=days
	
	printf(" The number of days the member is late to return the book : \n");
	scanf("%d",&d);
	
	if(d==5)
	{
		printf("\n Fine : RS/- 0.50 ");
	}
	
	else if(d>=6 && d<=10)
	{
		printf("\n Fine : RS/- 1.00 ");
	}
	
	else if(d>=10 && d<=30)
	{
		printf("\n Fine : RS/- 5.00 ");
	}
	
	else if(d>30)
	{
		printf("\n MEMBERSHIP WILL BE CANCELLED ");
	}
	
	else
	{
		printf("\n NO FINE ");
	}
	
	
	return 0;
	
}
