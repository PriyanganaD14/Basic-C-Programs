#include<stdio.h>
int main()
{
	int f1,f2,f3,f4=0;
	while(f4<=100)
	{
		printf("\n%d",f4);
		f4=f1+f2+f3;
		f1=f2;
		f2=f3;
		f3=f4;
	}
	return 0;
}
