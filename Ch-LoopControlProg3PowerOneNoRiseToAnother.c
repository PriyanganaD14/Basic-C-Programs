#include<stdio.h>

int main()
{
	int a,b,temp=1,loop=0;
	
	printf("Enter two number\n");
	scanf("%d%d",&a,&b);
	
	while(loop<a)
	{
	
	    {
		   temp=temp*b;
		}
			
		loop++;
	}
	
	printf("\nThe value of one number raised to the power of another is %d",temp);
	
	return 0;
}
