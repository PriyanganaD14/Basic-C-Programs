#include<stdio.h>

int main()
{
	int f1,f2,f3;
	
	printf("Fibonacci Serics :\n");
	
	fibo(f1,f2);
	
	return 0;
	
	
}

fibo(int x1,int x2)
{
	int x3=0;
	 x1=0,
	 x2=1;
	
	while(x3<=25)
	{
		printf("%d\n",x3);
		x3=x1+x2;
		x1=x2;
		x2=x3;
	}
	
	
}
