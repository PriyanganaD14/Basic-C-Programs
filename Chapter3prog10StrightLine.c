#include<stdio.h>

int main()
{
	int x1,y1,x2,y2,x3,y3,m,n;
	
	printf("Enter 1st point (x1,y1)=\n");
	scanf("%d%d",&x1,&y1);
	
	printf("\n Enter 2nd point (x2,y2)=\n");
	scanf("%d%d",&x2,&y2);
	
	printf("\n Enter 3rd point (x3,y3)=\n");
	scanf("%d%d",&x3,&y3);
	
	m=(y2-y1)/(x2-x1);
	n=(y3-y2)/(x3-x2);
	
	if(m==n)
	{
		printf("\n 3 points fall on one stright line.");
	}
	else
	{
		printf("\n 3 points not fall on one stright line.");
	}
	
	return 0;
	
	
}
