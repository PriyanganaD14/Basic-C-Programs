#include <stdio.h>
int main()
{
  int a,b;
  printf("Before Swapping :");
  scanf("%d %d",&a,&b);
  a=a+b;
  b=a-b;
  a=a-b;
  printf("After Swapping a=%d,b=%d",a,b);
  return 0;

}
