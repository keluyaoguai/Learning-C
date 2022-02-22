#include<stdio.h>
#include<stdlib.h>//system函数的头文件
#include<windows.h>//sleep函数的头文件
#include<conio.h>//getch函数真好用//kbhit函数也行
////////////////////////////////////////////////////////////////////////////////发射子弹的飞机，
int main()                                                                                      
{
    int x=5,y=10,i,j,k;//这些不要在循环体里定义，不然变化后的变量在下一个循环会被重置
    char input;
    int shout;
    while(1)
    {
        system("cls");
        if(shout==1)
        {
            for(i=0;i<x;i++)
                {
                    for(k=0;k<y;k++)//在纵坐标超过50左右射击会卡住,大概是嵌套循环的控制变量一样导致的，将i改为k就解决了
                        printf(" ");
                    printf("  o\n");
                }
            shout=0;//将其归零，以便下一次输入
        }
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
        printf("纵:%d横:%d",x,y);
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
    }
    printf("DROP OUT\n");
    return 0;
}
//////////////////////////////////////////////////通过getch函数使得飞机可以连续位移
// int main()
// {
//     int x=5,y=10,i,j;//这些不要在循环体里定义，不然变化后的变量在下一个循环会被重置
//     char c;
//     while(1)
//     {
//         system("cls");
//         for(i=0;i<x;i++)//抵达纵向坐标
//             printf("\n");
//         for(j=0;j<y;j++)
//             printf(" ");//抵达横向坐标
//         printf("  ^\n");//输出机头
//         for(j=0;j<y;j++)
//             printf(" ");
//         printf("=====\n"); //输出机身
//         for(j=0;j<y;j++)
//             printf(" ");
//         printf(" ! !\n");//输出机尾
//         if(kbhit())//当键盘无输入时跳过，进入下次循环，达到没有输入就在原地不断刷新的效果
//         {
//             c=getch();
//             if(c=='w')//向上
//                 x--;
//             if(c=='s')//向下
//                 x++;
//             if(c=='a')//向左
//                 y--;
//             if(c=='d')//向右
//                 y++;
//             if(x<0||y<0)//撞墙结束游戏
//                 {
//                     printf("Game Over\n");
//                     break;
//                 }
//             if(c=='p')//添加一个退出功能
//                 break;
//         }
//     }
//     printf("DROP OUT\n");
//     return 0;
// }
///////////////////////////////////////////////////////////////可以根据键盘输入位移的小飞机
// int main()                                          //这个是用scanf函数输入的，回车真麻烦
// {
//     int x=5,y=10,i,j;//这些不要在循环体里定义，不然变化后的变量在下一个循环会被重置
//     char c;
//     while(1)
//     {
//         system("cls");

//         for(i=0;i<x;i++)
//             printf("\n");
//         for(j=0;j<y;j++)
//             printf(" ");
//         printf("  ^\n");
//         for(j=0;j<y;j++)
//             printf(" ");
//         printf("=====\n");
//         for(j=0;j<y;j++)
//             printf(" ");
//         printf(" ! !\n");
//         printf("请输入行动\n");
//         scanf("%c",&c);
//         if(c=='w')//向上
//             x--;
//         if(c=='s')//向下
//             x++;
//         if(c=='a')//向左
//             y--;
//         if(c=='d')//向右
//             y++;
//         if(x<0||y<0)//撞墙结束游戏
//             {
//                 printf("Game Over\n");
//                 break;
//             }
//     }
//     return 0;
// }