#include<stdio.h>
int main()
{
    int n;
	printf("Enter the number");
	scanf("%d",&n);
	if(n%7==0&&n%10==0)
	{
	printf("Bazz no");
	}
	else
	{
		printf("Not");
	}
	return 0;
}
