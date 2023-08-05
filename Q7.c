#include<stdio.h>
int main()
{
    int x;
    printf("Enter the value x\n");
    scanf("%d",&x);
    (x&1)?printf("odd"):printf("even");
    return 0;
}
