#include<stdio.h>
int main()
{
    char zf[30];
    for(int i=0;i<30;i++)
    {
        printf("�������%d���ַ�\n",i+1);
        scanf("%s\n",zf+i);
        if(29==i)
            {
                printf("�������\n��ʼ�ж�\n");
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
                        printf("���ֵĸ����ǣ�%d\n��ĸ�ĸ����ǣ�%d\n�ַ��ĸ����ǣ�%d\n",x,y,z);
                }
            }
    }
    return 0;
}