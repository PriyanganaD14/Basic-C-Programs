#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the numbers : ");
	scanf("%d %d",&a,&b);
	if(a==b)
	{
		printf("equal");
	}
	else if(a>b)
	{
		printf("a is max");
	}
	else
	{
		printf("b is max");
	}
	return 0;
}
