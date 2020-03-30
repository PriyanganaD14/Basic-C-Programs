#include<stdio.h>

int main()
{
	
	float l,b,r,rectanglePerimeter=0,rectangleArea=0,circlePerimeter=0,circleArea=0;        //l=Length of Rectangle,b=Breadth of Reactangle,r=Radious of Circle
	
	printf(" Rectangle's length and breadth are respectively : ");
	scanf("%f%f",&l,&b);
	
	rectanglePerimeter=2*(l+b);
	printf("\n Perimeter of  Rectangle : %.2f",rectanglePerimeter);
	rectangleArea=l*b;
	printf("\n Area of Rectangle : %.2f",rectangleArea);
	
	printf("\n Circle's Radious is : ");
	scanf("%f",&r);
	
	circlePerimeter=((2*22*r)/7);
	printf("\n Perimeter of Circle : %.2f",circlePerimeter);
	circleArea=(22*r*r)/7;
	printf("\n Area of Circle : %.2f",circleArea);
	
	return 0;
	
	
}
