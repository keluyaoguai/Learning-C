#include<stdio.h>
int ji(int x,int y)
{
    int z=x*y;
    return z;
}
double shang(int x,int y)
{
    double z=x/y;
    return z;
}
int yu(int x,int y)
{
    int z=x%y;
    return z;
}
int main()
{
    int a=0;
    int b=0;
    scanf("%d%d",&a,&b);
    int c=ji(a,b);
    double d=shang(a,b);
    int e=yu(a,b);
    printf("两数的积是%d\n两数的商是%f\n两数的余数是%d\n",c,d,e);
    return 0;
}