#include<stdio.h>
int main()
{
    int x,rem,b,result;
    printf("Enter the value of x\n");
    scanf("%d",&x);
    rem=x%10;
    b=x/10;
    result=rem*100+b;
    printf("result=%d",result);
}
