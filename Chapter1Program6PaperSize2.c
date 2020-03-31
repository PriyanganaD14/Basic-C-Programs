#include<stdio.h>

int main()
{
	float A0l,A0b;
	
	A0l=1189;
	A0b=589;
	
	printf(" Print the all paper size : ");
	
//	A(n)l=A(n-1)b;
//	A(n)b=A(n-1)l/2;    //Function of n
	
	printf("\n Dimension of A0 : %.2f mm * %.2f mm",A0l,A0b);
	printf("\n Dimension of A1 : %.2f mm * %.2f mm",A0b,A0l/2);
	printf("\n Dimension of A3 : %.2f mm * %.2f mm",A0l/2,A0b/2);
	printf("\n Dimension of A4 : %.2f mm * %.2f mm",A0b/2,A0l/4);
	printf("\n Dimension of A5 : %.2f mm * %.2f mm",A0l/4,A0b/4);
	printf("\n Dimension of A6 : %.2f mm * %.2f mm",A0b/4,A0l/8);
	printf("\n Dimension of A7 : %.2f mm * %.2f mm",A0l/8,A0b/8);
	printf("\n Dimension of A8 : %.2f mm * %.2f mm",A0b/8,A0l/16);
	
	
	return 0;
	
	
	
	
}
