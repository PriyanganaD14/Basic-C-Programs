#include<stdio.h>
#include<math.h>

int main()
{
	
	int x,y,x1,y1,rad,rad1;                 //x,y=co-ordinate of origine,rad=radious of the circle,x1,y1=another co-ordinate,rad1=distance between new co-ordinate and origine.
	
	printf("Enter the co-ordinate of origine : \n");
	scanf("%d%d",&x,&y);
	printf("\nEnter the radious of the circle : \n");
	scanf("%d",&rad);
	printf("\nEnter testing co-ordinate : \n");
	scanf("%d%d",&x,&y);
	
	rad1=sqrt((pow((x1-x),2))+(pow((y1-y),2)));
	
	if(rad1==rad)
	{
		printf("\n The new co-ordinate is ON the Circle.");
	}
	
	else if(rad1>rad)
	{
		printf("\n The new co-ordinate is OUTSIDE of the Circle.");
	}
	
	else
	{
		printf("\n The new co-ordinate is INSIDE the Circle.");
	}
	
	return 0;
	
}
