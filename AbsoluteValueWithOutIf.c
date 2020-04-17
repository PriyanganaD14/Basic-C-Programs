#include<stdio.h>
#include<stdlib.h>

int main()
{
	float n;
	
	printf("Enter any number :");
	scanf("%f",&n);
	
	n=abs(n);
	
	printf("\n Absolute Number :%.2f",n);
	
	return 0;
	
}
