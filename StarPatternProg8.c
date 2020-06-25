#include<stdio.h>

int main()
{
	int i,j,k;
	 
	 for(i=1;i<=4;i++)
	 {
	 	k=1;                       //k=1,for each new line when start then k is set to the value 1 and print from first position of each line.
	 	for(j=1;j<=7;j++)
	 	{
	 		if(j>=5-i&&j<=3+i)
	 		{
	 			printf("%d",k);      //k is used for print number of star.
	 			j<=3?k++:k--;       //terminal operator.   //for getting 2,3,4 as well as,we incremeant k by k++ till when k<=4 and when k reach the value 4 in the middle position then k decresses.
			}
			else
			{
				printf(" ");
			}
		 }
		   printf("\n");
	 }
	 
	  return 0;
}
