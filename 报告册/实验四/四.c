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
        printf("�����벻������λ��������");//�����������λ�����Զ��庯��
}
int main()
{
    //////////////////////////////////////
    int a[5];
    scanf("%d\n%d\n%d\n%d\n%d\n",&a[0],&a[1],&a[2],&a[3],&a[4]);//���������λ���ֱ��������������ʱֻ��һ��һ�����룬������λҪ���㣬����и��õĽṹ��
        int b=(a[0]*10000)+(a[1]*1000)+(a[2]*100)+(a[3]*10)+a[4];//������ת��������
        int c=ws(b);
        printf("������λ���ǣ�%d\n",c);   //���λ��
    printf("��������������\n");
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
printf("�������ߵ��������\n");
    if(a[0]!=0)
        printf("%d%d%d%d%d",a[4],a[3],a[2],a[1],a[0]);//���ֵߵ������������һ���ĵģ���ʡ��
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
