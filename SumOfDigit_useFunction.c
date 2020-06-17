#include<stdio.h>

int main()
{
	int n;          //n=number
	
	printf("Enter the number :\n");
	scanf("%d",&n);
	
//	printf("Sumation of the digit of the number is :%d \n",sumation(n));

    sumation(n);
	
	return 0;
	
	
}

sumation(int x)
{
	int sum=0;
	int d;     //d=last digit
	
	while(x>0)
	{
	    d=x%10;
		x=x/10;
		sum=sum+d;
	}
	
	printf("Sumation of the digit of the number is :%d",sum);
}
