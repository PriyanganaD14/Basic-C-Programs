#include<stdio.h>

int main()
{
	
	int n,rem1,rem2,rem3,rem4,rem5,rev=0;           //rev=Reverse,rem1,rem2,rem3,rem4,rem5=Remenders.
	
	printf(" Enter The Five Digit Number : ");
	scanf("%d",&n);
	
	rem1=n%10;
	rev=(rev*10)+rem1;
	n=n/10;
	rem2=n%10;
	rev=(rev*10)+rem2;
	n=n/10;
	rem3=n%10;
	rev=(rev*10)+rem3;
	n=n/10;
	rem4=n%10;
	rev=(rev*10)+rem4;
	n=n/10;
	rem5=n%10;
	rev=(rev*10)+rem5;
	
	printf("\n Reverse Number : %d",rev);
	
	return 0;
	
}
