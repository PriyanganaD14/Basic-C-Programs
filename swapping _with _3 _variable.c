#include <stdio.h>
int main()
{
  int a,b,c=0;
  printf("Before Swapping :");
  scanf("%d %d",&a,&b);
  c=a;
  a=b;
  b=c;
  printf("After Swapping a=%d,b=%d",a,b);
  return 0;

}
