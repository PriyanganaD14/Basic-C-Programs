#include<stdio.h>

int main()
{
	
	int initial_money,money,no_of_100rs_note,no_of_50rs_note,no_of_10rs_note,no_of_5rs_note,no_of_2rs_note,no_of_1rs_note;
	
	printf("Plese enter the Money which is required\n");
	scanf("%d",&initial_money);
	
	money=initial_money;
	no_of_100rs_note=money/100;
	money=money%100;
	no_of_50rs_note=money/50;
	money=money%50;
	no_of_10rs_note=money/10;
	money=money%10;
	no_of_5rs_note=money/5;
	money=money%5;
	no_of_2rs_note=money/2;
	money=money%2;
	no_of_1rs_note=money;
	
	printf("\nSmallest number of notes that will combine to give Rs-%d/-",initial_money);
	printf("\nRs-100/- ~ %d",no_of_100rs_note);
	printf("\nRs-50/- ~ %d",no_of_50rs_note);
	printf("\nRs-10/- ~ %d",no_of_10rs_note);
	printf("\nRs-5/- ~ %d",no_of_5rs_note);
	printf("\nRs-2/- ~ %d",no_of_2rs_note);
	printf("\nRs-1/- ~ %d",no_of_1rs_note);
	
	
	return 0;	
	
}
