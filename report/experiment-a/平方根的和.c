#include<stdio.h>
#include<math.h>
int main()
{
    int a=0;
    int b=0;
    int c=0;
    double x=0;
    double y=0;
    double z=0;
    double sum=0;
    scanf("%d%d%d",&a,&b,&c);
    x=sqrt(a);
    y=sqrt(b);
    z=sqrt(c);
    sum=x+y+z;
    printf("sum=%f",sum);
    return 0;
}