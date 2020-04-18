#include<stdio.h>

int main()
{
	char health_condition,sex,place;
	int age;
	
	printf(" Enter the details of the person : ");
	printf("\n Enter the Health Condition of the person : ");
	scanf("%s",&health_condition);
	printf("\n Enter the Gender of the person : ");
	scanf("%s",&sex);
	printf("\n Enter the Location of the person : ");
	scanf("%s",&place);
	printf("\n Enter the Age of the person : ");
	scanf("%s",&age);
	
	if(health_condition=='Excellent'&&place=='City'&&age>=25&&age<=35)
	{
		if(sex=='Male')
		{
			printf("\n Premium : 4 per thousand\n");
			printf("\n Policy amount cannot exceed 2 lakh\n");
		}
		
		else
		{
			printf("\n Premium : 3 per thousand\n");
			printf("\n Policy amount cannot exceed 1 lakh\n");
		}
	}
	
    else if ((health_condition=='Poor')&&(sex=='Male')&&(place=='Village')&&(age>=25&&age<=35))
	{
		printf("\n Premium : 6 per thousand\n");
		printf("\n Policy amount cannot exceed 10,000\n");
	} 
	
	return 0;
	
	
}
