#include<stdio.h>
int main()
{
    // float a;
    // a=1/3;
    // printf("%9.6f",a);     //为什么输出的只有0
                    ////除法分为整除和精确除，两个除数是整型时自动归为整除，结果只有整数部分，没有小数，当除数有浮点数据时才能精确除
    float a,b,c;
    a=1;
    b=3;          //在这个计算里有一个是浮点数就能成立
    c=a/b;
    printf("%9.6f",c);
    return 0;
}