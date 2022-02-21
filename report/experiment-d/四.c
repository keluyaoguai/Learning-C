#include<stdio.h>
int ws(int m)
{
    if(m!=0&&m<10)
        return 1;
    else if(m<100)
        return 2;
    else if(m<1000)
        return 3;
    else if(m<10000)
        return 4;
    else if(m<100000)
        return 5;
    else 
        printf("请输入不多于五位的正整数");//输入数字输出位数的自定义函数
}
int main()
{
    //////////////////////////////////////
    int a[5];
    scanf("%d\n%d\n%d\n%d\n%d\n",&a[0],&a[1],&a[2],&a[3],&a[4]);//将输入的五位数分别输出，不过输入时只能一个一个输入，不满五位要补零，大概有更好的结构吧
        int b=(a[0]*10000)+(a[1]*1000)+(a[2]*100)+(a[3]*10)+a[4];//把数组转换成整型
        int c=ws(b);
        printf("该数的位数是：%d\n",c);   //输出位数
    printf("将该数逐个输出：\n");
    if(a[0]!=0)
        printf("%d\n%d\n%d\n%d\n%d\n",a[0],a[1],a[2],a[3],a[4]);
    else
        {
            if(a[1]!=0)
                printf("%d\n%d\n%d\n%d\n",a[1],a[2],a[3],a[4]);
            else
                {
                    if(a[2]!=0)
                        printf("%d\n%d\n%d\n",a[2],a[3],a[4]);
                    else
                        {
                            if(a[3]!=0)
                                printf("%d\n%d\n",a[3],a[4]);
                            else
                                printf("%d\n",a[4]);
                        } 
                } 
        }
//////////////////////////////////////
printf("将该数颠倒后输出：\n");
    if(a[0]!=0)
        printf("%d%d%d%d%d",a[4],a[3],a[2],a[1],a[0]);//数字颠倒后输出，从上一个改的，真省事
    else
        {
            if(a[1]!=0)
                printf("%d%d%d%d",a[4],a[3],a[2],a[1]);
            else
                {
                    if(a[2]!=0)
                        printf("%d%d%d",a[4],a[3],a[2]);
                    else
                        {
                            if(a[3]!=0)
                                printf("%d%d",a[4],a[3]);
                            else
                                printf("%d",a[4]);
                        } 
                } 
        }
//////////////////////////////////////
    return 0;
}
