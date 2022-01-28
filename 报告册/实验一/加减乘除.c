#include<stdio.h>
int main()
{
    int num1=0;
    int num2=0;
    int jia=0;
    int jian=0;
    int cheng=0;
    int chu=0;
    scanf("%d%d",&num1,&num2);
    jia=num1+num2;
    jian=num1-num2;
    cheng=num1*num2;
    chu=num1/num2;
    printf("%d\n%d\n%d\n%d",jia,jian,cheng,chu);
    return 0;
}