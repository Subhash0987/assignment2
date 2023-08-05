#include<stdio.h>
int main()
{
    int a,b,x;
    printf("Enter the value of a and b\n");
    scanf("%d%d",&a,&b);
    x=a;
    a=b;
    b=x;
    printf("After swapping:a=%d,b=%d",a,b);
    return 0;

}
