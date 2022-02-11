#include<stdio.h>
int main()
{
    printf("请输入项数：");
    int s;
    scanf("%d",&s);
    int i=0;
    int x=1,y=1,z=0;
    for(;;)
    { 
        x=y+z;//
        i++;                        //
        printf("第%d项是：%d\n",i,x);//
        if(s==i)                    //
            break;                  //
        y=z+x;
        i++;
        printf("第%d项是：%d\n",i,y);
        if(s==i)
            break;
        z=x+y;
        i++;
        printf("第%d项是：%d\n",i,z);
        if(s==i)
            break;
    }
    return 0;
}