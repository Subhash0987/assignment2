#include<stdio.h>
int main()
{
  int x,a,b,c,sum;
  printf("Enter the three digit number\n");
  scanf("%d",&x);
  a=x/100;
  b=(x%100)/10;
  c=x%10;
  sum=a+b+c;
  printf("sum=%d",sum);
  return 0;
}
