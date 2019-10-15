#include<stdio.h>
main()

{
	
	float bs,da,hra,gs=0;
	printf("Enter the basic salary");
	scanf("%f",&bs);
	da=bs*40/100;
	hra=bs*20/100;
	gs=bs+da+hra;
	
	printf("The gross salary;%f",gs);
}
