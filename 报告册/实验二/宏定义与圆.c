#define PI 3.14159
#include<stdio.h>
int main()
{
    float r=2.456;
    float a=2*r;
    float b=PI*r;
    float c=a*PI;
    float s=b*r;
    printf("圆的周长是%f,面积是%f",c,s);
    return 0;
}