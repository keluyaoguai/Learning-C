#include<stdio.h>
int main()
{
    float f=0;
    scanf("%f",&f);
    float a=f-32;
    printf("%f\n",a);
    double  b=5.0/9.0;    //�������뱻������һ����С����ʽ��ʱ�����ֵ�Ż���С������Ȼֱ�ӿ���С��λֱ���������
    printf("%f\n",b);
    float c=a*b;
    printf("%f�����¶�Ϊ%8.2f�����¶�",f,c);  //ǰ���������ռ�����ַ�λ��������С��λ����
    return 0;
}