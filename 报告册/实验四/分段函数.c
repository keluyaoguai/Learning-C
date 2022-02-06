#include<stdio.h>
int main()
{
    float x,y;
    scanf("%f",&x);
    if(x<1)
        printf("y=%f",x);
    else if (x<10)
    {
        y=(2*x)-1;
        printf("y=%f",y);
    }
    else if (x>=10)
    {
        y=(3*x)-11;
        printf("y=%f",y);
    }
    return 0;
}