#include<stdio.h>

int main()
{
	
	float F,C=0;
	
	printf(" Enter any Farenheit temparature : ");
	scanf("%f",&F);
	
	C=((F-32)*5)/9;
	
	printf("\n Centigrade Temparature : %.2f",C);
	
	return 0;
}
