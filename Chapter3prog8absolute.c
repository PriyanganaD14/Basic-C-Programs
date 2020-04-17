#include<stdio.h>

int main()
{
	float n;
	
	printf("Enter any number :");
	scanf("%f",&n);
	
	if(n<0)
	{
		n=-n;
		printf("\n The absolute number=%.2f",n);
	}
	else
	{
		printf("\n The absolute number=%.2f",n);
	}
	
	
	return 0;
}
