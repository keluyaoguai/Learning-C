#include<stdio.h>
float f3(float x)
{
    float z=1;    //����Ҫ�ø����ڴ棬��������͵Ļ�x�ĸ������Իᱻϴ��
    z=z*x;
    z=z*x;
    z=z*x;
    return z;
}
float f2(float x)
{
    float z=1;
    z=z*x;
    z=z*x;
    return z;
}
int main()
{
    printf("����������a��b��c��x\n");
    float a,b,c,x;
    scanf("%f%f%f%f",&a,&b,&c,&x);
    float a1=f3(x);   //c,˳��д��int�ˣ��ɹ�ϴ��
    float b1=f2(x);
    a=a*a1;
    b=b*b1;
    float jg=a+b+c;
    printf("���Ϊ%f",jg);
    // float a=f3(3);
    // float b=f3(1.5);
    // float c=f2(3);
    // float d=f2(1.5);
    // printf("%f\n%f\n%f\n%f\n",a,b,c,d);
    return 0;
}