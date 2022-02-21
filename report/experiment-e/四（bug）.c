#include<stdio.h>
int main()
{
    char zf[30];
    for(int i=0;i<30;i++)
    {
        printf("请输入第%d个字符\n",i+1);
        scanf("%s\n",zf+i);
        if(29==i)
            {
                printf("输入完毕\n开始判定\n");
                 for(int j=0,a,x,y,z;j<30;j++)
                {
                    a=zf[j];
                    if(a>=48&&a<=57)
                        x++;
                    else if(a>=65&&a<=90)
                        y++;
                    else if(a>=97&&a<=122)
                        y++;
                    else
                        z++;
                    if(29==j)
                        printf("数字的个数是：%d\n字母的个数是：%d\n字符的个数是：%d\n",x,y,z);
                }
            }
    }
    return 0;
}