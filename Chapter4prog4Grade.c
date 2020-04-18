#include<stdio.h>

int main()
{
	int hardness,tensile;
	float carbon;
	
	printf(" Enter the conditions\n");
	printf("\n Enter Hardness : ");
	scanf("%d",&hardness);
	printf("\n Enter Carbon : ");
	scanf("%f",&carbon);
	printf("\n Enter Tensile : ");
	scanf("%d",&tensile);
	
	if(hardness>=50 && carbon<=0.7 && tensile>=5600)
	{
		printf("\n Grade 10 ");
	}
	
	else if(hardness>=50 && carbon<=0.7)
	{
		printf("\n Grade 9 ");
	}
	
	else if(carbon<=0.7 && tensile>=5600)
	{
		printf("\n Grade 8 ");
	}
	
	else if(hardness>=50 && tensile>=5600)
	{
		printf("\n Grade 7");
	}
	
	else if(hardness>=50 || carbon<=0.7 || tensile>=5600)
	{
		printf("\n Grade 6 ");
	}
	
	else
	{
		printf("\n Grade 5 ");
	}
	
	
	return 0;
	
}
