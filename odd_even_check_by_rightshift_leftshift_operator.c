#include<stdio.h>

int main()
{
	int x,y,z;
	
	printf("Enter the number\n");
	scanf("%d",&x);
	
	y=x;
	x=x>>1;
	z=x<<1;
	
	if(y==z)
	{
		printf("The number %d is EVEN",y);
	}
	else
	{
		printf("The number %d is ODD",y);
	}
	return 0;
}
