#include<stdio.h>
int jc(int x)
{
    for(int i=1,a=1;i<=x;i++)   //��׳˵��Զ��庯��
    {
        a=a*i;
        if(x==i)
        return a;
    }
}
int main()
{
    for(int i=1,a=0,b=0;i<=10;i++)   //��һ��һ��ģ�������
    {
        b=jc(i);
        a=a+b;
        if(10==i)
         printf("����%d",a);
    }
    return 0;
}