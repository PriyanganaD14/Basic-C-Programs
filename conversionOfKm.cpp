#include<stdio.h>
main()

{
	float meter,cm,km=0;
	printf("Enter any number in km");
	scanf("%f",&km);
	
	meter=1000*km;
	cm=100000*km;
	
	printf("conversion in meter : %.2f\nconversion in cm : %.2f",meter,cm);
}
