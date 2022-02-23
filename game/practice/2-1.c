#include<stdio.h>
#include<stdlib.h>//system函数
#include<conio.h>//getch函数与kbhit函数
#include<Windows.h>//
int x,y,input,IfShoot,Top,Bottom;
//光标移动到(x,y)位置
void gotoxy(int x,int y)
{
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos;
    pos.X = x;
    pos.Y = y;
    SetConsoleCursorPosition(handle,pos);
}

//初始化
void Start()
{
    Top= 20;
    Bottom= 40;
    x=10;
    y=20;
}
//定义键盘输入的效果的
void ConductingInput()
{
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
            IfShoot = 1;
    }
}
//移动光标到指定横坐标的函数
void ToThisPoint(int y)
{
    for(int j=0;j<y;j++)
        {
            printf(" ");
        }
}
//将光标移动到指定坐标的函数
void ToThisPosition(int x,int y)
{
    for(int i=0;i<x;i++)
        {
            ToThisPoint(y);
            printf("\n");//因为顺序的原因，指挥到达指定纵坐标，横坐标只有在运动的过程中能到达
        }
}
//在指定横坐标显示子弹的
void ShootingHere(int x,int y)
{
    if(IfShoot == 1)
       {
           for(int i=0;i<(x-1);i++)
            {
                ToThisPoint(y);
                printf("  I\n");
            }
            IfShoot = 0;
       }
}
//显示飞机的
void CreatWarplane(int y)
{
    ToThisPoint(y);
    printf("  A\n");
    ToThisPoint(y);
    printf("-===-\n");
    ToThisPoint(y);
    printf(" W W\n");
}
//在指定坐标显示飞机的
void CreatWarplaneHere(int x,int y)
{
    ToThisPosition(x,y);
    ToThisPoint(y);
    printf("  A\n");
    ToThisPoint(y);
    printf("-===-\n");
    ToThisPoint(y);
    printf(" W W\n");
}
int main()
{
    Start();
    while(1)
    {
        system("cls");
        //gotoxy(0,0);
        if(IfShoot==1)
        {
            ShootingHere(x,y);
            CreatWarplane(y);
        }
        else
            CreatWarplaneHere(x,y);
        //sleep(1);
        ConductingInput();
    }
    return 0;
}