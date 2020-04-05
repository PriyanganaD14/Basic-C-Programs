#include<stdio.h>
#include<math.h>

int main()
{
	float a,b,c,s,x,ar;              //a,b,c=3 Sides of a Triangle,s=Perimeter and ar=Area of the Triangle
	
	printf(" Enter 3 sides of the Triangle : ");
	scanf("%f%f%f",&a,&b,&c);
	
	s=(a+b+c)/2;
	
	printf("\n Perimer : %.2f",s);
	
	x=(s*(s-a)*(s-b)*(s-c));
	ar=pow(x,0.5);
	
	printf("\n Area : %.2f",ar);
	
	
	
	return 0;
}
