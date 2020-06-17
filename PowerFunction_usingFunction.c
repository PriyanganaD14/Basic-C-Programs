#include<stdio.h>
#include<math.h>

//float power(float,int);

int main()
{
	int a;
	float b;
float power(float,int);	
	
	printf("Enter the  number and power of number are respectively\n");
	scanf("%f%d",&b,&a);
	
	printf("The result %.2f\n",power(b,a));
	
	return 0;
}

 float power(float y,int x)
{
	float res;
	
	res=pow(y,x);
	
	return(res);
}
