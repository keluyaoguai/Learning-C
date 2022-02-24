#include<stdio.h>
#include<stdlib.h>//system函数
#include<conio.h>//getch函数与kbhit函数
#include<Windows.h>//光标移动那个函数
int x,y,input,IfShoot,IfDead,v,bz,Top=0,Bottom=20,Left=0,Right=80,Score,Death,Power,Defaulty,Speed=0;
//初始化函数
void Start()
{
    x=Right/2;
    y=Bottom/2;
    bz=x;
    v=1;
    IfShoot=0;
    IfDead=0;
}
void HideCursor() // 用于隐藏光标
{
	CONSOLE_CURSOR_INFO cursor_info = {1, 0};  // 第二个值为0表示隐藏光标
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
}

//将光标移动到指定坐标的函数
void gotoxy(int x,int y)//一步到位，跳跃比连续省事多了
{
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos;
    pos.X = x;//从控制台输出的是反的
    pos.Y = y;
    SetConsoleCursorPosition(handle,pos);
}
//刷新界面的函数
void Refresh()
{
    gotoxy(1,1);
    int j,k;
    for(j=0;j<Bottom;j++)
    {
        for(k=0;k<Right;k++)
            printf(" ");
        printf("\n");
    }
}
//子弹输出函数
void Shoot(int x,int y)
{
    for(int i=0;i<y;i++)
    {
        gotoxy(x,y-i-1);
        printf("  :");
    }
    IfShoot=0;
}
//显示飞机的函数
void CreatWarplane(int x,int y)
{
    gotoxy(x,y);
    printf("  A");
    gotoxy(x,y+1);
    printf("-===-");
    gotoxy(x,y+2);
    printf(" W W");
    gotoxy(0,y+4);
    printf("Score:%d Defaulty:%d",Score,Defaulty);
}
//定义键盘输入的效果的
void ConductingInput()
{
    if(kbhit())//当键盘无输入时跳过，进入下次循环，达到没有输入就在原地不断刷新的效果
    {
        input = getch();
        if(input=='w'&&y>1)//向上
            y--;
        if(input=='s'&&y<Bottom)//向下
            y++;
        if(input=='a'&&x>1)//向左
            x--;
        if(input=='d'&&x<Right)//向右
            x++;
        if(input==' ')
            IfShoot = 1;
    }
}
void MyAction()
{
        CreatWarplane(x,y);
        if(IfShoot==1)
            {
                Shoot(x,y);
                if(bz==x+3)
                {
                    IfDead=1;
                    Score++;
                    Defaulty++;
                }
            }
        ConductingInput();
}
void ItsAction()
{
    if(IfDead==1)
        {
            bz=rand()%41;
            Death++;//复活倒计时
            if(Death==10)
                {IfDead=0;
                 Death=0;}
        }
    if(IfDead==0)    //判定是否显示
        {
            gotoxy(bz,1);
            printf("*");    //显示靶子
            Power++;
            if(Defaulty%5==0&&10-Speed>1)
                Speed++;
            if(Power>10-Speed)//使靶子十次循环移动一次
            {
                bz=bz+v;    //使靶子运动
                Power=0;
                if(bz<Left||bz>Right)
                    v=-v;  
            }
        }
}
int main()
{
    Start();
    for(;;)
    {
        system("cls");
        HideCursor();
        //Refresh();
        MyAction();
        ItsAction();
    }
    return 0;
}
