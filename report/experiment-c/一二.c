//ʵ��һ
#include<stdio.h>
int main()
{
    int a=3,b=4,c=5;
    float x=1.414,y=1.732,z=2.712;
    printf("%-7d%-7d%-7d\n",a,b,c);
    printf("%-7.3f%-7.3f%-7.3f\n",x,y,z);  //����������ĳ��ȣ������Ҷ��룬��������룬С�����ұ�����С��λ��
    return 0;
}
////ʵ���
#include<stdio.h>
int main()
{
    int a,b,c;
    float x,y,z;
    //scanf("%d%d%d%f%f%f",&a,&b,&c,&x,&y,&z);  //Ϊʲô���������������
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%f",&x);
    scanf("%f",&y);
    scanf("%f",&z);
    printf("%-7d%-7d%-7d\n",a,b,c);
    printf("%-7.3f%-7.3f%-7.3f\n",x,y,z);
    return 0;
}

