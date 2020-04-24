#include<stdio.h>

int main()
{
	
	int n,f=1;
	
	printf("Enter the number\n");
	scanf("%d",&n);
	
	while(n>0)
	{
		{
			f=f*n;
		}
		     n=n-1;
    }
	    printf("\nFactorial is : %d",f);
	    
	    return 0;
}
