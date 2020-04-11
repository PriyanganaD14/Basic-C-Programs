#include<stdio.h>
#include<math.h>

int main()
{
	
	double L1,L2,G1,G2,D,radL1,radL2,radG1,radG2,PI=3.14;
	
	printf(" Enter the values of Latitude and longitude : ");
	printf("\nL1=");
	scanf("%lf",&L1);
	printf("\nL2=");
	scanf("%lf",&L2);
	printf("\nG1=");
	scanf("%lf",&G1);
	printf("\nG2=");
	scanf("%lf",&G2);
	//scanf("%lf %lf %lf %lf",&L1,&L2,&G1,&G2);
	
	radL1=L1*(PI/180.0);
	radL2=L2*(PI/180.0);
	radG1=G1*(PI/180.0);
	radG2=G2*(PI/180.0);
	
	//x=(sin(radL1)*sin(radL2)+cos(radL1)*cos(radL2)*cos(radG2-radG1));
	
	D=(3963*acos(sin(radL1)*sin(radL2)+cos(radL1)*cos(radL2)*cos(radG2-radG1)));
	
	
	printf("Distance in nautical miles is : %lf ",D);
	
	return 0;
}
