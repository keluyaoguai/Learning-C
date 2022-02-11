#include<stdio.h>
int main()
{
    int s=0,m=0,f=0;
    char a[30];
    for(int i=0;i<30;i++)
    {
        scanf("%s",&a[i]);
    }
    printf("嗨\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n",a[1],a[2],a[3],a[4],a[5],a[6],a[7]);
    // for(int i=0;i<30;i++)
    // {
    //     char x=a[i];  //将字符数据以以整型形式输出，得到的就是ASCII码
    //     if()
    //         s++;
    //     else if()
    //         m++;
    //     else if()
    //         f++;
    //     if(30==i)
    //         printf("数字的个数是：%d\n字母的个数是：%d\n字符的个数是：%d\n");
    // }
    return 0;
}