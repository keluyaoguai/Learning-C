#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<conio.h>
int x_plank,x_ball,y_ball,v_x=2,v_y=1,input,Left=0,Right=120,Top=0,Bottom=40,Time;
void HideCursor() //隐藏光标
{
	CONSOLE_CURSOR_INFO cursor_info = {1, 0}; 
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
}

//将光标移动到指定坐标
void gotoxy(int x,int y)
{
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos;
    pos.X = x;
    pos.Y = y;
    SetConsoleCursorPosition(handle,pos);
}
void StartUp()//初始化参数
{
    x_plank=Right/2;
    x_ball=rand()%(3-110-1);
    y_ball=2;
}
void ProcessInput()//控制板子
{
    if(kbhit())
    {
        input=getch();
        if(input=='x'&&x_plank>0)//板子左移
            x_plank--;
        else if(input=='z'&&x_plank>3)//板子左大移
            x_plank-=3;
        else if(input=='c'&&x_plank<Right-5)//板子右移
            x_plank++;
        else if(input=='v'&&x_plank<Right-8)//板子大右移
            x_plank+=3;   
    } 
}
void HappyBall()//弹球
{
    gotoxy(x_ball,y_ball);//显示小球
        printf("O");
    if(Time==5)//每循环n次改变一次坐标
    {
        x_ball=x_ball+v_x;
        y_ball=y_ball+v_y;
        if(x_ball<=Left||x_ball>=Right)//左右弹反
            v_x=-v_x;
        if(y_ball<=Top)//上方弹反
            v_y=-v_y;
        if(y_ball==Bottom-1&&x_ball<x_plank+9&&x_ball>x_plank+1)//接触板子时弹反
            v_y=-v_y;
        //留一个没接住球然后break退出的位置
        Time=0;
    }
    Time++;
}
void CreatPlank()//显示板子
{
    gotoxy(x_plank,Bottom);
    printf("=========");
}
int main()
{
    StartUp();
    while(1)
    {
        system("cls");
        HideCursor();
        HappyBall();
        if(y_ball>Bottom)
            break;
        CreatPlank();
        ProcessInput();
    }
    return 0;
}