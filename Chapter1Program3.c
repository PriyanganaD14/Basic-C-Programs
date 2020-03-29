#include<stdio.h>

int main()
{
	
	int DSA,Java,Network,Math,c;
	int Sum=0;    //sum=Sumation of five subject
	float AvgMarks,Per;              //AvgMarks=Average Marks,Per=Percent
	
	 printf(" Enter Marks of five subjects : ");
	 scanf("%d %d %d %d %d",&DSA,&Java,&Network,&Math,&c);
	// printf("\n DSA :%d",DSA);
	//scanf("%d",&DSA);
	//printf("\n Java :%d",Java);
	//scanf("%d",&Java);
	//printf("\n Network :",Network);
	//scanf("%d",&Network);
	//printf("\n c :",c);
	//scanf("%d",&c);
	 
	 Sum=DSA+Java+Network+Math+c;
	 printf("\n Sumation of the Number of five Subjects :%d ",Sum);
	 AvgMarks=(Sum/5);
	 printf("\n Average Number : %.2f",AvgMarks);
	 Per=AvgMarks;
	 printf("Percentage : %.2f",Per);
	 
	 return 0;
}
