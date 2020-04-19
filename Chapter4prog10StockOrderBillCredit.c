#include<stdio.h>

int main()
{
	int no_of_order,stock,bill,credit;
	
	printf("Enter the no of Stock\n");
	scanf("%d",&stock);
	printf("\nEnter the Number of Order\n");
	scanf("%d",&no_of_order);
	printf("\nEnter the amount of Bill\n");
	scanf("%d",&bill);
	printf("\nEnter the Credit amonut\n");
	scanf("%d",&credit);
	
	if(no_of_order<=stock && bill==credit )
	{
		printf("\n Credit is OK and Supply has requirement" );
	}
	
	else if(bill>credit && no_of_order<=stock)
	{
		printf("\n Credit is not OK");
	}
	else if(no_of_order>stock && bill<=credit)
	{
		printf("\n Credit is OK but Stock is limited");
		printf("\n Balance Money will be shipped");
	}
	
	return 0;
	
}
