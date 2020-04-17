#include<stdio.h>

int main()
{
	float a1,a2,a3,a;                //a1=Angle1,a2=Angle2,a3=Angle3,a=Sum of 3 angles.
	
	printf("Enter 3 angle respectively : ");
	printf("\na1=");
	scanf("%f",&a1);
	printf("\na2=");
	scanf("%f",&a2);
	printf("\na3=");
	scanf("%f",&a3);
	
	a=a1+a2+a3;
	
	if(a==180)
	{
		printf("\nTriangle is valid");
	}
	else
	{
		printf("\nTriangle is not valid");
	}
	
	return 0;
}
