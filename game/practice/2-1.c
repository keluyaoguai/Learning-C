#include<stdio.h>
#include<stdlib.h>//system����
#include<conio.h>//getch������kbhit����
#include<Windows.h>//
int x,y,input,IfShoot,Top,Bottom;
//����ƶ���(x,y)λ��
void gotoxy(int x,int y)
{
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos;
    pos.X = x;
    pos.Y = y;
    SetConsoleCursorPosition(handle,pos);
}

//��ʼ��
void Start()
{
    Top= 20;
    Bottom= 40;
    x=10;
    y=20;
}
//������������Ч����
void ConductingInput()
{
    if(kbhit())//������������ʱ�����������´�ѭ�����ﵽû���������ԭ�ز���ˢ�µ�Ч��
    {
        input = getch();
        if(input=='w')//����
            x--;
        if(input=='s')//����
            x++;
        if(input=='a')//����
            y--;
        if(input=='d')//����
            y++;
        if(input==' ')
            IfShoot = 1;
    }
}
//�ƶ���굽ָ��������ĺ���
void ToThisPoint(int y)
{
    for(int j=0;j<y;j++)
        {
            printf(" ");
        }
}
//������ƶ���ָ������ĺ���
void ToThisPosition(int x,int y)
{
    for(int i=0;i<x;i++)
        {
            ToThisPoint(y);
            printf("\n");//��Ϊ˳���ԭ��ָ�ӵ���ָ�������꣬������ֻ�����˶��Ĺ������ܵ���
        }
}
//��ָ����������ʾ�ӵ���
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
//��ʾ�ɻ���
void CreatWarplane(int y)
{
    ToThisPoint(y);
    printf("  A\n");
    ToThisPoint(y);
    printf("-===-\n");
    ToThisPoint(y);
    printf(" W W\n");
}
//��ָ��������ʾ�ɻ���
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