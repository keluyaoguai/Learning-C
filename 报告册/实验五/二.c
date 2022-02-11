#include<stdio.h>
int jc(int x)
{
    for(int i=1,a=1;i<=x;i++)   //求阶乘的自定义函数
    {
        a=a*i;
        if(x==i)
        return a;
    }
}
int main()
{
    for(int i=1,a=0,b=0;i<=10;i++)   //套一下一的模板就行了
    {
        b=jc(i);
        a=a+b;
        if(10==i)
         printf("答案是%d",a);
    }
    return 0;
}