#include<stdio.h>

int main()
{
	int y;
	float x,i;
	
	printf("Table of value of i,y,x respectfully -\n \n");
	
	for(y=1;y<=6;y++)
	{
		for(x=5.5;x<=12.5;x+=.5)
		{
		
		   	i=2+(y+(.5*x));
		   	
		   	 printf("i=%.2f ,y=%d , x=%.2f\n\n",i,y,x);		
	    }
	    
	}
	
	return 0;
}
