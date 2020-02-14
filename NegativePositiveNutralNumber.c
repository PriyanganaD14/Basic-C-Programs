#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("Enter the determined number : ");
	scanf("%d",&n);
	if(n==0)
	{
		printf("Nutral");
	}
	else if(n>0)
	{
		printf("Positive");
	}
	else(n<0)
	{
		printf("Negative");
	}
	return 0;
}

