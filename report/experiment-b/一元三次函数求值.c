#include<stdio.h>
float f3(float x)
{
    float z=1;    //这里要用浮点内存，如果用整型的话x的浮点属性会被洗掉
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
    printf("请依次输入a，b，c，x\n");
    float a,b,c,x;
    scanf("%f%f%f%f",&a,&b,&c,&x);
    float a1=f3(x);   //c,顺手写成int了，成功洗掉
    float b1=f2(x);
    a=a*a1;
    b=b*b1;
    float jg=a+b+c;
    printf("结果为%f",jg);
    // float a=f3(3);
    // float b=f3(1.5);
    // float c=f2(3);
    // float d=f2(1.5);
    // printf("%f\n%f\n%f\n%f\n",a,b,c,d);
    return 0;
}