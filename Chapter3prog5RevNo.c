#include<stdio.h>

int main()
{
	int n,d1,d2,d3,d4,d5,rev,org;
	
	printf("Enter the 5 digit original number : ");
	scanf("%d",&org);
	
	n=org;
	d1=n%10;
	n=n/10;
	d2=n%10;
	n=n/10;
	d3=n%10;
	n=n/10;
	d4=n%10;
	n=n/10;
	d5=n%10;
	rev=(d1*10000)+(d2*1000)+(d3*100)+(d4*10)+(d5*1);
	
	printf("\n Reverse Number : %d",rev);
	
	if(rev==org)
	{
		printf("\n Original Number=Reverse Number ");
	}
	
	else
	{
		printf("\n Original Number!=Reverse Number");
	}
	
	return 0;
}
