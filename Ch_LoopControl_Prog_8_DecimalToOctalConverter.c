#include<stdio.h>

int main()
{
	int n,rem1,res1=0,rem2,res2=0;
	
	printf("Enter the Decimal number :\n");
	scanf("%d",&n);
	
	while(n>0)
	{
		rem1=n%8;
		n=n/8;
		res1=(res1*10+rem1);
	}
	
	while(res1>0)
	{
	  rem2=res1%10;
	  res1=res1/10;
	  res2=(res2*10+rem2);	
	}
	
	printf("Octal Equivalent of the entered Decimal Number : %d",res2);
	
	return 0;
}
