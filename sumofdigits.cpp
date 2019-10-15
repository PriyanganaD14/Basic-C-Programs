#include<stdio.h>
main()
{
	int n,rem,sum=0;
	printf("Enter any five digit number");
	scanf("%d",&n);
	while(n!=0)
	
{
	rem=n%10;
	sum=sum+rem;
	n=n/10;
}
	printf("the sum of digit is :%d",sum);
}
