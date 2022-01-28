#include<stdio.h>
int main()
{
    int ma=0;
    int mb=0;
    int mc=0;
    int md=0;
    int me=0;
    int na=0;
    int nb=0;
    int nc=0;
    int nd=0;
    int ne=0;
    int sum=0;
    scanf("%d%d%d%d%d",&ma,&mb,&mc,&md,&me);
    na=ma*ma;
    nb=mb*mb;
    nc=mc*mc;
    nd=md*md;
    ne=me*me;
    sum=na+nb+nc+nd+ne;
    printf("%d",sum);
    return 0;
}

//有自定义函数的改良版
// int pf(int x)
// {
//     int y=x*x;
//     return y;
// }
// int pfh(int a,int b, int c,int d,int e)
// {
//     int A=pf(a);
//     int B=pf(b);
//     int C=pf(c);
//     int D=pf(d);
//     int E=pf(e);
//     int h=A+B+C+D+E;
//     return h;
// }
// #include<stdio.h>
// int main()
// {
//     int a=0;
//     int b=0;
//     int c=0;
//     int d=0;
//     int e=0;
//     scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
//     int jg=pfh(a,b,c,d,e);
//     printf("这五个数的平方和是%d",jg);
//     return 0;
// }