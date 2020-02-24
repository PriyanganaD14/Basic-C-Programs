#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the numbers : ");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		{
		printf("a max");	
		}
		else
		{
			printf("c max");
		}
	}
	else{
		
	if(b>c)
	{
		printf(" b max");
	}
	else
	{
		printf("c max");
	}
}
	return 0;
}
