#include<stdio.h>

int main()
{
	int x,y;
	
	printf("Enter the co-ordinate (x,y)=\n");
	scanf("%d%d",&x,&y);
	
	if(x==0 && y==0)
	{
		printf("\n Origine ");
	}
	
	else if (y==0)
	{
		printf("\n X-axis");
	}
	
	else if (x==0)
	{
		printf("\n Y-axis");
	}
    
	else if (x!=0&&y!=0)
	
    {
		printf("\n Not on the origin,Not on the X-axis,Not on the Y-axis ");
    }
	
	return 0;
}
