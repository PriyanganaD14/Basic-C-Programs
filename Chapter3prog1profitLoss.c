#include<stdio.h>
#include<stdlib.h>
 
 int main()
 
 {
 	float cp,sp,diff;                           //cp=cost Price,sp=Selling Price
 	
 	printf("Enter the cost price and selling price ");
 	scanf("%f%f",&cp,&sp);
 	
 	
 	
 	
 	if (cp<sp){
 		
 		diff=sp-cp;
 		
 		printf("\nProfit =%f",profit);
 		
	 }
	 else {
	 	
	 	diff=abs(sp-cp);
	 	
	 	printf("\nLoss =%f",profit);
	 	
        }
	
	
	 return 0;
 }
