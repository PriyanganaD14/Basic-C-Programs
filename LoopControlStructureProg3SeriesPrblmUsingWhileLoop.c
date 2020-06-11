#include<stdio.h>

int main()
{
	int num=1,count;
	float sum=0.0,fact;
	
	printf("Sumation of first seven terms of  1/1!+2/2!+3/3!+.... :\n");
	
	while(num<=7)
	{
		fact=1;
		
		for(count=1;count<=num;count++)
		{
		     fact=fact*count;
			 	
		}
		
		
		sum=sum+(num/fact);
		
		num++;
    }
	
	printf("Sum = %f",sum);
	
	return 0;
}
