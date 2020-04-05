#include<stdio.h>

int main()
{
	int n,s=0,d1,d2,d3,d4,d5;
	
	printf(" Enter the Five Digit Number : ");
	scanf("%d",&n);
	
	
	d1=n%10;
	s=s+d1;
	n=n/10;
	d2=n%10;
	s=s+d2;
	n=n/10;
	d3=n%10;
	s=s+d3;
	n=n/10;
	d4=n%10;
	s=s+d4;
	n=n/10;
	d5=n%10;
	s=s+d5;

	
	printf("The Sum of Five Digit is : %d",s);
	
	return 0;
}
