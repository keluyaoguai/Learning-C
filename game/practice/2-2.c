#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<conio.h>
int x_plank,x_ball,y_ball,v_x=2,v_y=1,input,Left=0,Right=120,Top=0,Bottom=40;
// void HideCursor() //���ع��
// {
// 	CONSOLE_CURSOR_INFO cursor_info = {1, 0}; 
// 	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
// }

//������ƶ���ָ������
void gotoxy(int x,int y)
{
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos;
    pos.X = x;
    pos.Y = y;
    SetConsoleCursorPosition(handle,pos);
}
void StartUp()//��ʼ������
{
    x_plank=Right/2;
    x_ball=rand()%(3-110-1);
    y_ball=2;
}
void ProcessInput()//���ư���
{
    input=getch();
    if(input=='x'&&x_plank>0)//��������
        x_plank--;
    else if(input=='z'&&x_plank>3)//���������
        x_plank-=3;
    else if(input=='c'&&x_plank<Right-5)//��������
        x_plank++;
    else if(input=='v'&&x_plank<Right-8)//���Ӵ�����
        x_plank+=3;    
}
void HappyBall()//����
{
    gotoxy(x_ball,y_ball);
    printf("O");
    x_ball=x_ball+v_x;
    y_ball=y_ball+v_y;
    if(x_ball<=Left||x_ball>=Right)//���ҵ���
        v_x=-v_x;
    if(y_ball<=Top)//�Ϸ�����
        v_y=-v_y;
    if(y_ball==Bottom-1&&x_ball<x_plank+9&&x_ball>x_plank+1)//�Ӵ�����ʱ����
        v_y=-v_y;
    //��һ��û��ס��Ȼ��break�˳���λ��
}
void CreatPlank()//��ʾ����
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
        HappyBall();
        if(y_ball>Bottom)
            break;
        CreatPlank();
        ProcessInput();
    }
    return 0;
}