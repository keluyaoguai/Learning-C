#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    float d=(b*b)-(4*a*c);
    if(0==a)
        {
            float x=0-(c/b);
            printf("�÷��̷�һԪ���η���\n��Ϊ%f\n",x);   //��Щ��Ľ�����ܼ򻯳ɸ�ʽ���е��ϧ
        }
    else if(0==d)
        {
            float x=0-(b/a)/2;
            printf("��������ȵĸ�\n��Ϊ%f\n",x);
        }
    else if(d>0)
        {
            float x1,x2;
            d=sqrt(d);
            x1=0-(b/a)/2+(d/a)/2;
            x2=0-(b/a)/2-(d/a)/2;
            printf("���������ȵ�ʵ��\n�ֱ�Ϊ%f��%f\n",x1,x2);
        }
    else if(d<0)
        {
            float x1,x2;
            d=-d;
            d=sqrt(d);
            float m=0-(b/a)/2;
            float n=(d/a)/2;
            printf("�����������\n�ֱ�Ϊ%f+%fi��%f-%fi\n",m,n,m,n);
        }
    return 0;
}