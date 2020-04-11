#include<stdio.h>
#include<math.h>

int main()
{
	
	float x,y,r,phi;                       //x,y=Cartesian co-ordinates, r,phi=polar co-ordinate.
	
	printf(" Cartesian co-ordinate : \n");
	printf(" x = ");
	scanf("%f",&x);
	printf(" y = ");
	scanf("%f",&y);
	
	
	r=sqrt((x*x)+(y*y));
	phi=atan(y/x);
	
	printf("\n Polar co-ordinate : ");
	
    printf("\n r = %.2f ,\n phi = %.2f",r,phi);
	return 0;
	
	 
}
