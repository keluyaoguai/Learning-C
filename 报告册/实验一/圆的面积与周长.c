#include<stdio.h>
int main()
{
    int r=0;
    double s=0;
    double c=0;
    double pai=3.1415926;
    scanf("%d",&r);
    s=pai*r*r;
    c=2*pai*r;
    printf("该圆的周长是%f，面积是%f",c,s);
    return 0;
}