#include<stdio.h>

int main()
{
	
	float km,mt=0,ft=0,inch=0,cm=0;       // km=Kilometer,mt=Meter,ft=Feet,inch=Inches,cm=centimeter
	
	printf(" Enter the Distance between two Cities in Kilometer : ");
	scanf("%f",&km);
	
	mt=1e3*km;
	printf("\n Distance in Meter : %.2f",mt);
	ft=3280*km;
	printf("\n Distance in Feet : %.2f",ft);
	inch=39370.079*km;
	printf("\n Distance in Inch : %.2f",inch);
	cm=1e5*km;
	printf("\n Distance in Centimeter : %.2f",cm);
	
	return 0;
	
}
