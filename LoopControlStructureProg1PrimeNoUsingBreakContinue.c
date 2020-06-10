#include<stdio.h>

int main()
{
	int number,div;
	
	printf("Prime Numbers from 1 to 300\n");
	
	
	for(number=2;number<=300;number++)
	{
		for(div=2;div<number;div++)
		
		if(number%div==0)
		{
			break;
		}
		
		if(number==div)
		
			printf("%d is Prime Number \n",number);
		
		continue;
		
	}
	
	return 0;
}

