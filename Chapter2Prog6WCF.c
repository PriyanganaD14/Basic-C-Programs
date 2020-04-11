#include<stdio.h>
#include<math.h>

int main()
{
	
	float t,v,wcf,x;                      //t=temparature,v=velocity,wcf=Wind Chill Factor.
	
	printf("Enter the Air Temparature : \n");
	printf("t=");
	scanf("%f",&t);
	printf("v=");
	scanf("%f",&v);
	
	x=pow(v,0.16);
	wcf=35.74+(0.6215*t)+(((0.425*t)-35.75)*x);
	
	printf(" Wind Chill Factor : %f ",wcf);
	
	return 0;
}
