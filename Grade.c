#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number : ");
	scanf("%d",&n);
	if(n>=80)
	{
		printf("Grade AA");
	}
	else if(n>=60 && n<=79)
	{
		printf("Grade A");
	}
	else if(n>=50 && n<=59)
	{
		printf("Grade B");
	}
	else if(n>=40 && n<=49)
	{
		printf("Grade C");
	}
	else
	{
		printf("Fail");
	}
	return 0;
}
