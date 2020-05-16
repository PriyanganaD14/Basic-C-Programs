#include<stdio.h>

int main()
{
	int range,num,big,small,limit;
	
	printf("Enter the limit :\n");
	scanf("%d",&limit);
	
	printf("\nEnter the %d numbers :\n",limit);
	scanf("%d",&num);
	
	big=small=num;
	limit=limit-1;
	
	while(limit)
	{
		printf("\nEnter number :\n");
		scanf("%d",&num);
		
		if(big<num)
		{
			big=num;
		}
		else if(small>num)
		{
			small=num;
		}
		
		limit--;
	}
	
	range=big-small;
	
	printf("\nThe Big Number is :%d",big);
	printf("\nThe Small Number is :%d",small);
	printf("\nThe Range is :%d",range);
	
	return 0;
	
}
