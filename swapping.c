#include<stdio.h>
int main()
{
  int a,b;
  print("Enter a=");
  scanf("%d",&a);
  printf("Enter b=");
  scanf("%d",&b);
  a=a-b;
  b=a+b;
  a=b-a;
  printf("After swapping,a=%d",a);
  printf("After swapping,b=%d",b);
  return 0;
}
