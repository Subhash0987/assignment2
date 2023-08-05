#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the two digit \n");
    scanf("%d%d",&x,&y);
    x=x*10;
    x=x+y;
    printf("resulting number=%d\n",x);
    return 0;
}
