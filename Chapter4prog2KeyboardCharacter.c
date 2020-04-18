#include<stdio.h>

int main()
{
	int n;
	
	printf("Enter any Character from keyboard\n");
	scanf("%c",&n);
	
	if(n>=65&&n<=90)
	{
		printf("\nCAPITAL LATER");
	}
	
	else if(n>=97&&n<=122)
	{
		printf("\nsmall later");
	}
	
	else if(n>=48&&n<=57)
	{
		printf("\nDigital Number");
	}
	
	else if(n>=0&&n<=47||n>=58&&n<=64||n>=123&&n<=127)
	{
	    printf("\nSpcial Symbol");	
	}
	
	return 0;
	
}
