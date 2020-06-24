#include<stdio.h>

int main()
{
	int i,j,k;            //when k=1,then print star and when k=0,then print space,so one star one space is printed alternatively.
	
	for(i=1;i<=5;i++)
	{
		    k=1;              //for each loop when i=1,then k=1,it means when each new line start then k is set to 1.
		for(j=1;j<=9;j++)
		{
			if(j>=6-i&&j<=4+i&&k)     //here k=1.
			{
				printf("*");
				k=0;          //after the print star,k become 0 and unsatisfied the if condition and for loop goes to the else condition.
			}
			else
			{
				printf(" ");        //print space because k=0.
				k=1;               //after print space k become 1 and get out from else condition.
			}
		}
		  printf("\n");
	}
	   return 0;
}
