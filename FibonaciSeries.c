#include<stdio.h>
int main()
{
	int f1,f2,f3=0;
	while(f3<=30)
	{
		printf("\n%d",f3);
		f3=f1+f2;
		f1=f2;
		f2=f3;
	}
	return 0;
}
