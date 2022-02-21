#include<stdio.h>
int main()
{
    int a,b,c,x,y;  //还是这种申请方式省事
    scanf("%d%d%d",&a,&b,&c);
    x=a+b+c;
    y=a-b-c;
    printf("x1=a+b+c=%2d+%2d+%2d=%3d\nx2=a-b-c=%2d-%2d-%2d=%3d",a,b,c,x,a,b,c,y);
    return 0;
}