//一二的集合，打移动靶的移动飞机,添加了靶子的复活功能
#include<stdio.h>
#include<stdlib.h>//system函数的头文件
#include<windows.h>//sleep函数的头文件
#include<conio.h>//getch函数真好用//kbhit函数也行
#define left 0
#define right 90
int main()                             //启动不了，显示黄字，哪的问题?//终端的问题，删掉重启就行了                                                               
{
    int x=5,y=10,i,j,k,n=0,fh;//这些不要在循环体里定义，不然变化后的变量在下一个循环会被重置
    char input;
    int shout,kill=0,score=0,v_n=1;
    while(1)
    {
        system("cls");
        //下面是显示靶子
        if(kill==0)
            {
                for(j=0;j<n;j++)//从移动小球那扒的代码
                    printf(" ");
                    printf("O\n");
                if(n<left||n>right)  
                    {v_n=-v_n;}
            n=n+v_n;
            }
        //下面是显示子弹
        if(shout==1)
        {
            for(i=0;i<x;i++)
                {
                    for(k=0;k<y;k++)//在纵坐标超过50左右射击会卡住,大概是嵌套循环的控制变量一样导致的，将i改为k就解决了
                        printf(" ");
                    printf("  o\n");
                }
            shout=0;//将其归零，以便下一次输入
            if(kill==0)//防止靶子消失后子弹经过该位置仍得分
            {
                if((n-v_n)==(y+2))//判定子弹是否击中靶子
                {kill=1;score++;}
            }
        }
        //下面是显示机身
        else
            for(i=0;i<x;i++)
                printf("\n");
        for(j=0;j<y;j++)
            printf(" ");//抵达横向坐标
        printf("  A\n");//输出机头
        for(j=0;j<y;j++)
            printf(" ");
        printf("=====\n"); //输出机身
        for(j=0;j<y;j++)
            printf(" ");
        printf(" ! !\n");//输出机尾
        printf("纵:%d横:%d 分数：%d",x,y,score);
        //下面是处理键盘输入
        if(kbhit())//当键盘无输入时跳过，进入下次循环，达到没有输入就在原地不断刷新的效果
        {
            input = getch();
            if(input=='w')//向上
                x--;
            if(input=='s')//向下
                x++;
            if(input=='a')//向左
                y--;
            if(input=='d')//向右
                y++;
            if(input==' ')
                shout = 1;
            if(x<0||y<0)//撞墙结束游戏
                {
                    printf("Game Over\n");
                    break;
                }
            if(input=='p')//添加一个退出功能
                break;
        }
        //经过固定次数的循环后，复活靶子
        fh++;
        if(fh==500)
        {
            fh=0;
            kill=0;
        }
    }
    printf("DROP OUT\n");
    return 0;
}