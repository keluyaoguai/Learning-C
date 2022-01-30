#include<stdio.h>
int main()                    //什么玩意，类型错了吧
{
    int a=2;
    a+=a;
    a-=2;
    a*=2+3;
    a/=a+a;
    printf("结果为%d",a);
    return 0;
}