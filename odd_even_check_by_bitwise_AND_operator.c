#include<stdio.h>

int main()
{
	int n;
	printf("Enter the number :\n");
	scanf("%d",&n);
	
	if((n&1)==0){
	printf("The number %d is EVEN",n);
}
   else
{
	printf("The number %d is ODD",n);
}
return 0;	
	
}
