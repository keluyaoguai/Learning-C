#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    float d=(b*b)-(4*a*c);
    if(0==a)
        {
            float x=0-(c/b);
            printf("该方程非一元二次方程\n根为%f\n",x);   //有些题的结果不能简化成根式，有点可惜
        }
    else if(0==d)
        {
            float x=0-(b/a)/2;
            printf("有两个相等的根\n根为%f\n",x);
        }
    else if(d>0)
        {
            float x1,x2;
            d=sqrt(d);
            x1=0-(b/a)/2+(d/a)/2;
            x2=0-(b/a)/2-(d/a)/2;
            printf("有两个不等的实根\n分别为%f与%f\n",x1,x2);
        }
    else if(d<0)
        {
            float x1,x2;
            d=-d;
            d=sqrt(d);
            float m=0-(b/a)/2;
            float n=(d/a)/2;
            printf("有两个共轭复根\n分别为%f+%fi与%f-%fi\n",m,n,m,n);
        }
    return 0;
}