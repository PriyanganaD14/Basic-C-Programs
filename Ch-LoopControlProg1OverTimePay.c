#include<stdio.h>

int main()
{
	
	int hr1=40,hr2,otr=12,loop=1,otp=0;       //hr1=working hour,hr2=Includingr=OverTimeRate,otp=OverTimePay.
	
	printf("Enter the total working hour\n");
	scanf("%d",&hr2);
	
	while(hr1<hr2)
	{
	
	   {
		otp=otr*loop;
		
	   }
	
	hr1++;
	loop++;
    
    }
    
    printf("\nOverTimePay=%d",otp);
    
    
    return 0;
}
