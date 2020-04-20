#include<stdio.h>

int main()
{
	float s1,s2,s3;
	
	printf(" Enter 3 sides of the Triangle : \n");
	scanf("%f%f%f",&s1,&s2,&s3);
	
	if( s1<=s2+s3 || s2<=s1+s3 || s3<=s1+s2 )
	{
		printf("\nTriangle is valid.");
	}
	
	else
	{
		printf("\nTriangle is not valid.");
	}
	
	return 0;
}

