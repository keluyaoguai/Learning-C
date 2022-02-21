#include<stdio.h>
int main()
{
    float f=0;
    scanf("%f",&f);
    float a=f-32;
    printf("%f\n",a);
    double  b=5.0/9.0;    //当除数与被除数有一个是小数形式的时候，输出值才会是小数，不然直接砍掉小数位直接输出整数
    printf("%f\n",b);
    float c=a*b;
    printf("%f华氏温度为%8.2f摄氏温度",f,c);  //前面是输出数占的总字符位，后面是小数位个数
    return 0;
}