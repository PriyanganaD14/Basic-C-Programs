#include<stdio.h>

int main()
{
	int n;
	
	printf("Enter value :\n");
	scanf("%d",&n);

	printf("The Factorial is : %d\n",fact(n));
		
	
}

  fact(int x)
{
	int f=1;
	
	while(x>0)
	{
		f=f*x;
		x=x-1;
		
	}
	
	
	return (f);
	
}
