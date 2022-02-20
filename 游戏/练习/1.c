#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x,y,i,j,velocity;
    printf("请输入x与v\n");
    scanf("%d%d",&x,&velocity);
    for(int k=0;k<100;k++)
    {
        for(;;)
        {
            system("cls");
            for(i=0;i<y;i++)
                printf("\n");
            for(j=0;j<x;j++)
                printf(" ");
            printf("(*)");
            y=y+velocity;
            if(y==11)
                break;
            if(y==-1)
                break;
        }
        velocity=-velocity;//通过break判断跳出循环，改变速度后再次执行该循环，完成“反弹”的效果
    }
    return 0;
}
//////////////////////////////////////////以动态到达坐标的*
// int main()
// {
//     int x,y;
//     scanf("%d%d",&x,&y);//输入坐标
//     for (int i=0;i<y;i++)//配合清屏函数达到刷新的效果的循环
//         {
//             system("cls");//清屏函数
//             for(int l=0;l<i;l++)//Y坐标
//                 printf("\n");
//             for (int j=0;j<x;j++)//X坐标
//                 printf(" ");
//             printf("*\n");
//         }
//     return 0;
// }
///////////////////////////////////////////
