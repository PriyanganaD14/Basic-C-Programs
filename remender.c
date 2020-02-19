#include<stdio.h>
int main()
{
	int a,b,c,d=0;
	printf("Enter the values : ");
	scanf("%d%d",&a,&b);
	c=a/b;
	d=a-(b*c);
	printf("The remender is %d",d);
	return 0;
	
	}
