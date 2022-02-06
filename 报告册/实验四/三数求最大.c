#include<stdio.h>
int main()
{
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    if(a>=b)
    {
        if(a>=c)
        printf("最大的是%f\n",a);
        else
        printf("最大的是%f\n",c);
    }
    else
    {
        if(b>=c)
        printf("最大的是%f\n",b);
        else
        printf("最大的是%f\n",c);
    }
    return 0;
}