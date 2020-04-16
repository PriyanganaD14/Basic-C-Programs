#include<stdio.h>

int main()
{
	int ramage,shyamage,ajayage;
	
	printf("Enter Ram's age, Shyam's age, Ajay's age respectively : ");
	scanf("%d%d%d",&ramage,&shyamage,&ajayage);
	
	if(ramage>shyamage)
	{
		if(ramage>ajayage)
		{
			printf(" Ram is yongest ");
		}
		else
		{
			printf("\n Ajay is yongest ");
		}	
	}
	
	else
	{
	    if(shyamage>ajayage)
	    {
		     printf("\n Shyam is yongest ");
	    }
	    
	    else
	    {
	    	printf("\n Ajay is yongest ");
		}
}

return 0;
	
}
