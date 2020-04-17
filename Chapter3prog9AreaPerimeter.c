#include<stdio.h>

int main()
{
	int l,b,ar,peri;      //l=Lenghth,b=Breadth,ar=Area,peri=Perimeter.
	
	printf("Length of the rectangle is = ");
	scanf("%d",&l);
	printf("\n Breadth of the rectangle is = ");
	scanf("%d",&b);
	
	ar=l*b;
	peri=2*(l+b);
	
	if(ar>peri)
	{
		printf("\n Area of the Rectangle is greater than it's Perimeter.");
	}
	else
	{
		printf("\n Area of the Rectanfle is not greater than it's Perimeter.");
	}
	return 0;
}
